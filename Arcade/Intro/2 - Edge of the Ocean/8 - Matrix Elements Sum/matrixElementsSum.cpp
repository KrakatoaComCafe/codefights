int matrixElementsSum(std::vector<std::vector<int>> matrix) {
    
    //a vector of booleans to flag when an zero is found in a column
    std::vector<bool> zeroColumnFound (matrix[0].size(), false);
    int result = 0;
    
    for(int i = 0; i < matrix.size(); i++)
    {
        for(int j = 0; j < matrix[0].size(); j++)
        {
            bool canAcessThisTile = zeroColumnFound.at(j) == false;
            bool tileHasValueZero = matrix[i][j] == 0;
            
            if(canAcessThisTile && tileHasValueZero) zeroColumnFound.at(j) = true;
            else if(canAcessThisTile) result += matrix[i][j];
        }
    }
    
    return result;
}
