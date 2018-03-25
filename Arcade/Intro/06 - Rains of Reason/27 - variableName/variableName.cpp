bool variableName(std::string name) {

    for(int index = 0; index < name.length(); index++)
    {
        char currentChar = name.at(index);
        bool currentCharIsDigit = (currentChar >= '0') && (currentChar <= '9');
        bool currentCharIsLetter = (toupper(currentChar) >= 'A' && toupper(currentChar) <= 'Z');
        bool currentCharIsUnderscore = currentChar == '_';
        bool firstChar = index == 0;
        
        if(firstChar && currentCharIsDigit) return false;
        if( currentCharIsLetter || currentCharIsUnderscore || currentCharIsDigit ) continue;
        else return false;
    }
    
    return true;
}
