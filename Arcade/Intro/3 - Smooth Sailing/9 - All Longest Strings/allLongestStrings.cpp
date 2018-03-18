std::vector<std::string> allLongestStrings(std::vector<std::string> inputArray) {
    
    int maxSequence = 0;
    std::vector<std::string> result;
    
    for(int i = 0; i < inputArray.size(); i++)
    {
        //a string with a bigger length is found
        if(maxSequence < inputArray.at(i).length())
        {
            //reset the array and update the max sequence value
            result.resize(0);
            maxSequence = inputArray.at(i).length();
        }
        if(maxSequence == inputArray.at(i).length())
        {
            //add the string
            result.push_back(inputArray.at(i));
        }
    }
    
    return result;
}
