char firstDigit(std::string inputString) {

    int i;
    for(i = 0; i < inputString.length(); i++)
    {
        bool charIsADigit = inputString.at(i) >= '0' && inputString.at(i) <= '9';
        if(charIsADigit) break;
    }
    
    return inputString.at(i);
}
