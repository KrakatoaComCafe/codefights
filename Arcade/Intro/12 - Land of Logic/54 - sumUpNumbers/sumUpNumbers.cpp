int sumUpNumbers(std::string inputString) {

    //search the string for int and put they in a vector of ints
    std::vector<int> values = getNumbers(inputString);
    
    //return the sum of all values
    return sumValues(values);
}

//*************************************
//
//               Logic
//
//*************************************

//search the string for int and return a vector of ints
std::vector<int> getNumbers(std::string str) {
    
    std::vector<int> result;
    //string to build the int as the digits are found
    std::string auxString;
    
    for(int i = 0; i < str.length(); i++) {
        char currentChar = str.at(i);
        bool auxStringNotEmpty = !auxString.empty();
        bool currentCharIsADigit = std::isdigit(currentChar);
        bool currentCharIsNotDigit = !currentCharIsADigit;
        
        if(currentCharIsNotDigit && auxStringNotEmpty) {
            addToVector(&result, &auxString);
        }
        //add the current digit to the auxiliar string
        if(currentCharIsADigit) {
            auxString += currentChar;
        }
    }
    
    //one last tranfer if the string is not empty
    bool auxStringNotEmpty = !auxString.empty();
    if(auxStringNotEmpty) {
        addToVector(&result, &auxString);
    }
    
    return result;
}

//sum the values of the string
int sumValues(std::vector<int> values) {
    bool stringIsEmpty = values.size() == 0;
    if(stringIsEmpty) return 0;
    
    int sum = 0;
    
    for(int index = 0; index < values.size(); index++) {
        sum += values.at(index);
    }
    
    return sum;
}

//add the int to the vector
void addToVector(std::vector<int>* result, std::string* strValue) {
    int value = std::stoi(*strValue);
    
    result->push_back(value);
    strValue->clear();
}

/******************************************/
//test
void showVector(std::vector<int> v) {
    for(int i = 0; i < v.size(); i++) {
        cout << v.at(i) << endl;
    }
}