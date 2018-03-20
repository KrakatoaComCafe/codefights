std::vector<std::string> allLongestStrings(std::vector<std::string> inputArray) {
    
    int maxSequence = 0;
    std::vector<std::string> result;
    
    for(int i = 0; i < inputArray.size(); i++)
    {
        bool foundBiggerString = maxSequence < inputArray.at(i).length();
        if(foundBiggerString)
        {
            //reset the array and update the max sequence value
            result.resize(0);
            maxSequence = inputArray.at(i).length();
        }
        bool validString = maxSequence == inputArray.at(i).length();
        if(validString)
        {
            result.push_back(inputArray.at(i));
        }
    }
    
    return result;
}
