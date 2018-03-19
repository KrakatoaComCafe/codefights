bool sudoku(std::vector<std::vector<int>> grid) {
    
    //check if the sum of all rows are equal to 45
    if(!checkRow(grid)) return false;
    
    //check if the sum of all collumns are equal to 45
    if(!checkCollumn(grid)) return false;
    
    //check if there are 9 unique elements in each 3x3 matrix
    if(!checkSubMatrix(&grid)) return false;

    return true;
}

//check if the sum of all rows are equal to 45
bool checkRow (std::vector<std::vector<int>> grid) {
    int sum = 0;
    
    for(int i = 0; i < grid.size(); i++) {
        for(int j = 0; j < grid[i].size(); j++){
            sum += grid[i][j];
        }
        if(sum != 45) return false;
        sum = 0;
    }
    
    return true;
}

//check if the sum of all collumns are equal to 45
bool checkCollumn (std::vector<std::vector<int>> grid) {
    int sum = 0;
    
    for(int i = 0; i < grid.size(); i++) {
        for(int j = 0; j < grid[i].size(); j++){
            sum += grid[j][i];
        }
        if(sum != 45) return false;
        sum = 0;
    }
    
    return true;
}

//Uses a set to check if each sub matrix (3x3) have unique numbers
//You could just add the numbers to see if they are equal to 45, set is just an alternative
bool checkSubMatrix(std::vector<std::vector<int>>* grid) {
    std::set<int> result;
    
    //first 2 fors are to go through the sudoku matrix (9x9)
    //last 2 fors are to go through the sub matrix (3x3)
    
    for(int i = 0 ; i < 9; i += 3) {
        for(int j = 0; j < 9; j+= 3) {
            for(int x = i; x < i+3; x++) {
                for(int y = j; y < j+3; y++) {
                    result.insert(grid->at(x).at(y));
                }
            }
            if(result.size() != 9) return false;
            result.clear();
        }
    }
    return true;
}