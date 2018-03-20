bool palindromeRearranging(std::string inputString) {

    //vectors to save the chars that are found and the frequency they are found
    std::vector<char> vChar;
    std::vector<int> vCharCounter;
    
    for(int i = 0; i < inputString.length(); i++)
    {
        int charPosition = getCharPosition(vChar, inputString.at(i));
        bool charWasNotFound = charPosition == -1;
        if(charWasNotFound)
        {
            //insert char and start a counter
            vChar.push_back(inputString.at(i));
            vCharCounter.push_back(1);
        }
        else
        {
            vCharCounter[charPosition]++;
        }
    }
    
    int oddNumberCount = countOddValues(vCharCounter);
    bool tooMuchOddNumbers = oddNumberCount > 1;
    
    if(tooMuchOddNumbers) return false;
    return true;
}

//checks if the char was put in the vector before
int getCharPosition(std::vector<char> vChar, char c)
{
    for(int i = 0; i < vChar.size(); i++)
    {
        if(vChar.at(i) == c) return i;
    }
    
    return -1;
}

//return the amount of odd numbers in the vector
int countOddValues(std::vector<int> vCounter) {
    int oddCounter = 0;
    
    for(int index = 0; index < vCounter.size(); index++)
    {
        bool oddNumber = vCounter[index] % 2 != 0;
        if(oddNumber) oddCounter++;
    }
    
    return oddCounter;
}