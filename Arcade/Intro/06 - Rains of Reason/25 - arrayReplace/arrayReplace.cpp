std::vector<int> arrayReplace(std::vector<int> inputArray, int elemToReplace, int substitutionElem) {

    for(int index = 0; index < inputArray.size(); index++)
    {
        bool currentCharEqualsToElement = inputArray[index] == elemToReplace;
        if(currentCharEqualsToElement) inputArray[index] = substitutionElem;
    }
    
    return inputArray;
}
