std::string lineEncoding(std::string s) {

    //variable to keep the current char and the amount of times it shows up
    char currentChar;
    int currentAmount;
    
    std::string result;
    
    for(int i = 0; i < s.length(); i++) {
        bool aDifferentCharIsFound = s.at(i) != currentChar;
        
        if(aDifferentCharIsFound) {
            if(i != 0) {
                addToString(&result, currentChar, currentAmount);
            }
            
            //change the char we will be using and set the counter to 1
            currentChar = s.at(i);
            currentAmount = 1;
        }
        else { //we just increment the counter in case the char appears more than one time
            currentAmount++;
        }
    }
    
    //add the last result that the <for> skips
    addToString(&result, currentChar, currentAmount);
    
    return result;
}

//add the amount of times the char shows up (if needed) and the char itself to the string
void addToString(std::string* result, char currentChar, int currentAmount) {
    bool currentAmountIsNeeded = currentAmount > 1;
    
    if (currentAmountIsNeeded) {
        *result += std::to_string(currentAmount)+currentChar;
    } else {
        *result += currentChar;
    }
}
