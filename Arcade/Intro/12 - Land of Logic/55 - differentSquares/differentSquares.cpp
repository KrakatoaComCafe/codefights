int differentSquares(std::vector<std::vector<int>> matrix) {

    //the container set will keep only the unique matrix 2x2 we found
    std::set<string> s;
    
    //goes throgh the matrix
    for(int row = 0; row < matrix.size()-1; row++) {
        for(int col = 0; col < matrix.at(row).size()-1; col++) {
            //insert all elements (to string) inside the 2x2 matrix
            s.insert(
                std::to_string(matrix.at(row).at(col)) +
                std::to_string(matrix.at(row).at(col+1)) +
                std::to_string(matrix.at(row+1).at(col)) +
                std::to_string(matrix.at(row+1).at(col+1)) );
        }
    }
    
    return s.size();
}
