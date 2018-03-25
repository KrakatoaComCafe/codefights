bool isIPv4Address(std::string inputString) {
    
    const int minLength = 7;
    const int maxLength = 15;
    const int numOfGroups = 4;
    
    bool lengthIsTooSmall = inputString.length() < minLength;
    bool lengthIsTooBig = inputString.length() > maxLength;
    if( lengthIsTooSmall || lengthIsTooBig ) return false;
    
    std::vector<std::string> ipv4Groups = explode(inputString, '.');
    
    bool wrongAmountOfGroups = ipv4Groups.size() != numOfGroups;
    if(wrongAmountOfGroups) return false;
    
    bool notValidIPV4 = !checkForDigits(ipv4Groups);
    if (notValidIPV4) return false;
    
    return true;
}

//explode de string using one char as the delimiter
std::vector<std::string> explode(std::string inputString, char delimiter) {
    std::vector<std::string> result;
    std::string auxString;
    
    for(auto&& currentChar : inputString) {
        bool foundDelimiter = currentChar == delimiter;
        
        if(foundDelimiter) {
            addToVector(&result, &auxString);
        } else {
            auxString += currentChar;
        }
    }
    addToVector(&result, &auxString);
    
    return result;
}

//add the string to a vector and resets the string
void addToVector(std::vector<std::string>* result, std::string* auxString) {
    result->push_back(*auxString);
    auxString->clear();
}

//verify all values in a vector of strings to see if matches a IPV4 range
bool checkForDigits(std::vector<std::string> ipv4Groups) {
    const int maxAmountOfDigits = 3;
    
    for(auto&& currentString : ipv4Groups) {
        bool tooMuchDigits = maxAmountOfDigits < currentString.length();
        bool stringIsEmpty = currentString.empty();
        if (tooMuchDigits || stringIsEmpty) return false;
        
        bool stringIsNotValid = !isStringOnlyDigits(currentString);
        if(stringIsNotValid) return false;
        
        bool notValidRange = !isValidRange(currentString);
        if(notValidRange) return false;
    }
    
    return true;
}

//verifies if all elements of the string are digits
bool isStringOnlyDigits(std::string str) {
    for(auto&& currentChar : str) {
        bool currentCharNotDigit = currentChar < '0' || currentChar > '9';
        if (currentCharNotDigit) return false;
    }
    
    return true;
}

//verifies if the value of a string is a valid range, 0 to 255
bool isValidRange(std::string str) {
    int decimalValue = std::stoi(str);
    bool notValidRange = decimalValue < 0 || decimalValue > 255;
    if(notValidRange) return false;
    return true;
}

/***********************************************/
//test
void showVector(std::vector<std::string> myVector) {
    for(auto&& str : myVector) {
        cout << str << endl;
    }
}