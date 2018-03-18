int matrixElementsSum(int[][] matrix) {

    //new variables to allocate the value of row and de column... cuz i'm lazy
    int row = matrix.length;
    int col = matrix[0].length;
    //an array of booleans to know when a zero is found
    boolean[] zeroColumnFound = new boolean[col];
    int result = 0;
    
    //goes through the matrix
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            //if no zero was located in this column yet, but there is an zero in this postion of the matrix 
            //the position in "zeroColumnFound" is updated
            if(zeroColumnFound[j] == false && matrix[i][j] == 0) zeroColumnFound[j] = true;
            //if there is no zero so far(in this column), the result is updated
            else if(zeroColumnFound[j] == false) result += matrix[i][j];
        }
    }
    
    return result;
}
