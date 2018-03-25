int matrixElementsSum(int[][] matrix) {

    //an array of booleans to know when a zero is found
    boolean[] zeroColumnFound = new boolean[matrix[0].length];
    int result = 0;
    
    for(int row = 0; row < matrix.length; row++)
    {
        for(int j = 0; j < matrix[0].length; j++)
        {
            boolean canAcessThisTile = zeroColumnFound[j] == false;
            boolean tileHasValueZero = matrix[row][j] == 0;
            
            if(canAcessThisTile && tileHasValueZero) zeroColumnFound[j] = true;
            else if(canAcessThisTile) result += matrix[row][j];
        }
    }
    
    return result;
}
