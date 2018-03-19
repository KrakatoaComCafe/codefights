bool isBeautifulString(std::string inputString) {
    
    std::map<char, int> frequencyOfChar;
    
    addToMap(&frequencyOfChar, &inputString);
    
    bool sequenceIsNotDesc = !verifySequenceDescAmount(&frequencyOfChar);
    if (sequenceIsNotDesc) return false;
    
    return true;
}

//**************************************
//
//             Logic
//
//**************************************

//add each letter to a map and count the number of times the letter shows up
void addToMap(std::map<char, int>* frequencyOfChar, std::string* inputString) {
    
    for(int index = 0; index < inputString->length(); index++) {
        char currentChar = inputString->at(index);
        
        (*frequencyOfChar)[currentChar] += 1;
    }
}

//checks if the sequence of chars (a-z) is in strictly descending order
bool verifySequenceDescAmount(std::map<char, int>* frequencyOfChar) {
    
    for(char index = 'a'; index < 'z'; index++) {
        int currentAmount = (*frequencyOfChar)[index];
        int nextAmount = (*frequencyOfChar)[index+1];
        
        if(currentAmount < nextAmount) return false;
    }
    
    return true;
}

/************************************/
//test
void showMap(std::map<char, int> myMap) {
    
    for(char index = 'a'; index <= 'z'; index++) {
        cout << index << ": " << myMap[index] << endl;
    }
    /*
    for (auto& currentPosition: myMap) {
        cout << currentPosition.first << ": " << currentPosition.second << endl;
    }*/
}