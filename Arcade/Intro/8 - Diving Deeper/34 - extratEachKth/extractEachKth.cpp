std::vector<int> extractEachKth(std::vector<int> inputArray, int k) {

    int deletePosition = k;
    
    bool vectorIsTooSmallToRemove = inputArray.size() < deletePosition;
    if(vectorIsTooSmallToRemove) return inputArray;
    
    for(int index = inputArray.size()-1; index >= 0; index--)
    {
        bool atTheIndexToRemove = (index+1) % deletePosition == 0;
        if(atTheIndexToRemove) inputArray.erase(inputArray.begin()+index);
    }
    
    return inputArray;
}
