int matrixElementsSum(std::vector<std::vector<int>> matrix) {
    
    //two variables to hold the numbers of row and column... cuz it's easier =D
    int row = matrix.size();
    int col = matrix[0].size();
    //a vector of booleans to flag when an zero is found in a column
    std::vector<bool> zeroColumnFound (col,false);
    int result = 0;
    
    //goes through the vector
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            //the flag for a column is set to true when no zero was found in that column so far and a zero is founded in the matrix
            if(zeroColumnFound.at(j) == false && matrix[i][j] == 0) zeroColumnFound.at(j) = true;
            else if(zeroColumnFound.at(j) == false) result += matrix[i][j];
        }
    }
    
    return result;
}
