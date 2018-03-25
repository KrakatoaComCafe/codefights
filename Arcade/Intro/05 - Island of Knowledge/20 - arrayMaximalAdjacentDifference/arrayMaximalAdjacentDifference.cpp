int arrayMaximalAdjacentDifference(std::vector<int> inputArray) {

    int max = 0;
    
    for(int index = 0; index < inputArray.size()-1; index++)
    {
        int absolute = std::abs(inputArray[index] - inputArray[index+1]);
        
        bool newMaxWasFound = absolute > max;
        if(newMaxWasFound) max = absolute;
    }
    
    return max;
}
