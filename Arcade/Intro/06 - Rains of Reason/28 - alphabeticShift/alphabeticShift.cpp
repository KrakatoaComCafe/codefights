std::string alphabeticShift(std::string inputString) {

    for(int i = 0; i < inputString.length(); i++)
    {
        char* currentChar = &inputString.at(i);
        
        if(*currentChar == 'z') *currentChar = 'a';
        else *currentChar = *currentChar + 1;
    }
    
    return inputString;
}
