bool isLucky(int n) {

    std::string str = std::to_string(n);
    int sumLeft = 0;
    int sumRight = 0;
    
    bool lengthIsAnOddNumber = str.length() % 2 != 0;
    if(lengthIsAnOddNumber) return false;
    
    for(int index = 0; index < str.length(); index++)
    {
        bool addingFirstHalh = index < str.length()/2;
        if(addingFirstHalh)
        {
            sumLeft += (int)str.at(index);
        }
        else sumRight += (int)str.at(index);
    }
    
    bool bothValuesAreEqual = sumLeft == sumRight;
    if(bothValuesAreEqual) return true;
    return false;
}
