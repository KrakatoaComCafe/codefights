int adjacentElementsProduct(std::vector<int> inputArray) {
    
    //initial value for the largest product
    int largest = inputArray.at(0) * inputArray.at(1);
    
    //goes through the array checking the product
    for(int i = 1; i < inputArray.size()-1; i++)
    {
        int product = inputArray.at(i)*inputArray.at(i+1);
        
        bool foundBiggerNumber = product > largest;
        if(foundBiggerNumber) largest = product;
    }
    
    return largest;
}
