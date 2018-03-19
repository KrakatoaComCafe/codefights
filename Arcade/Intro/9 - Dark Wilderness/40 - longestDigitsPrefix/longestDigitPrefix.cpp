std::string longestDigitsPrefix(std::string inputString) {
    std:string prefix;
    
    for(int stringIndex = 0; stringIndex< inputString.length(); stringIndex++) {
        char currentChar = inputString.at(stringIndex);
        bool charIsADigit = currentChar >= '0' && currentChar <= '9';
        
        if (charIsADigit) {
            prefix += currentChar;
        } else {
            break;
        }
    }
    
    return prefix;
}
