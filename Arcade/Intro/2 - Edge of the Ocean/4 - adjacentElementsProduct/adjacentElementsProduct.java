int adjacentElementsProduct(int[] inputArray) {

    int largestProduct = inputArray[0]*inputArray[1];;
    
    for(int index = 1; index < inputArray.length-1; index++)
    {
        int result = inputArray[index]*inputArray[index+1];
        
        boolean foundBiggerValue = result > largestProduct;
        if(foundBiggerValue) largestProduct = result;
    }
    
    return largestProduct;
}
