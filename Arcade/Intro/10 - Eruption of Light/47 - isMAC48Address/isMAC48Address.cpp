bool isMAC48Address(std::string inputString) {  
    
    //unchangeable values for the size of the string and the amount of groups of hexadecimal digits for a MAC address
    const int strLength = 17;
    const int numGroups = 6;
    bool wrongNumberOfChars;
    bool notExclusiveHexadecimal;
    bool wrongNumberOfGroups;
    
    wrongNumberOfChars = inputString.length() != strLength;
    if(wrongNumberOfChars) return false;
    
    //explode the string, using the char '-' to break the string
    std::vector<std::string> groups = explode(inputString, '-');
    
    notExclusiveHexadecimal = !isHexa(groups);
    if(notExclusiveHexadecimal) return false;
    
    //check the number of groups create
    wrongNumberOfGroups = groups.size() != numGroups;
    if(wrongNumberOfGroups) return false;
    
    return true;
}

//******************************
//
//            Logic
//
//******************************

//explode the string, returning a vector of strings
std::vector<std::string> explode(std::string str, char delimiter) {
    std::string auxString;
    std::vector<std::string> result;
    char currentChar;
    bool charIsNotDelimiter;
    bool stringHasValueInside;
    
    for(int stringIndex = 0; stringIndex < str.length(); stringIndex++) {
        currentChar = str.at(stringIndex);
        charIsNotDelimiter = currentChar != '-';
        
        if(charIsNotDelimiter) {
            auxString += currentChar;
        }
        else {
            addStringToVector(&result, &auxString);
        }
        
    }
    
    stringHasValueInside = !auxString.empty();
    if(stringHasValueInside)
        addStringToVector(&result, &auxString);
    
    return result;
}

//add the string to the vector and reset the string
void addStringToVector(std::vector<std::string>* result, std::string* auxString) {
    result->insert(result->begin(), *auxString);
    auxString->clear();
}

//verify if a vector of strings possesses only hexadecimal elements
bool isHexa(std::vector<std::string> vec) {
    char aux;
    bool hexadecimalLetter;
    bool decimalNumber;
    
    for(int i = 0; i < vec.size(); i++) {
        for(int j = 0; j < vec.at(i).length(); j++) {
            aux = vec.at(i).at(j);
            //verify if it's hexadecimal
            hexadecimalLetter = (aux >= 'A' && aux <= 'F');
            decimalNumber = (aux >= '0' && aux <= '9');
            if( hexadecimalLetter || decimalNumber )
                continue;
            else return false;
        }
    }
    
    return true;
}
