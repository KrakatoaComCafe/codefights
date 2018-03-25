std::vector<std::vector<int>> minesweeper(std::vector<std::vector<bool>> matrix) {

    std::vector<std::vector<int> > result (matrix.size());
    
    for(int row = 0; row < matrix.size(); row++)
    {
        result[row].resize(matrix[row].size());
        for(int col = 0; col < matrix[row].size(); col++)
        {
            result[row][col] = getTrueCount(matrix, row, col);
        }
    }
    
    return result;
}

int getTrueCount(std::vector<std::vector<bool> > matrix, int row, int col)
{
    bool accessingOutOfTheMatrix = row < 0 || col < 0 || row > matrix.size()-1 || col > matrix[0].size()-1;
    if( accessingOutOfTheMatrix ) return -1;
    
    int trueCount = 0;
    
    for(int currentRow = row - 1; currentRow <= row + 1; currentRow++)
    {
        //correct out of the bound positions
        if(currentRow < 0) currentRow = 0;
        else if(currentRow >= matrix.size()) break;
        
        for(int currentCol = col -1; currentCol <= col + 1; currentCol++)
        {
            //correct out of bound positions
            if(currentCol < 0) currentCol = 0;
            else if(currentCol >= matrix[currentRow].size()) break;
            
            //ignores the current position
            if(currentRow == row && col == currentCol) continue;
            if(matrix[currentRow][currentCol] == true ) trueCount++;
        }
    }
    
    return trueCount;
}