int arrayChange(std::vector<int> inputArray) {

    int count = 0;
    
    for(int i = 1; i < inputArray.size(); i++)
    {
        while(inputArray[i-1] >= inputArray[i])  
        {
            count++;
            inputArray[i]++;
        }
    }
    
    return count;
}
