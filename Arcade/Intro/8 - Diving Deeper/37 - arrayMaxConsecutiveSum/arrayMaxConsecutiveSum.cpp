int arrayMaxConsecutiveSum(std::vector<int> inputArray, int k) {
    
    int consecutiveElements = k;
    
    vector<int> sum(inputArray.size()+1);
    
    for(int i=0;i < inputArray.size();i++)
        sum[i+1]=inputArray[i]+sum[i];
    
    int maxValue = 0;
    
    for(int index = consecutiveElements; index <= inputArray.size(); index++) {
        int subBetween_current_and_Kth_to_the_left = sum[index] - sum[index-consecutiveElements];
    
        maxValue = max(maxValue, subBetween_current_and_Kth_to_the_left);
    }
    
    return maxValue;
}
