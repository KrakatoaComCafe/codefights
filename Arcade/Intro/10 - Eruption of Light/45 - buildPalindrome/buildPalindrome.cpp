std::string buildPalindrome(std::string st) {

    /*
     * The idea here is to get the first element of the initial string and put it at
     * the begin of the new(and by now empty) second string, check if the concatenation
     * is palindrome. If not, take the second element of the initial string and put at
     * the beginning of the second string, check if the concatenation is palindrome.
     * Repeat until exhaustation.
     */
    
    bool initialStringIsPalindrome = isPalindrome(st);
    if(initialStringIsPalindrome) return st;
    
    //create a new string to add the new elements
    std::string stAppend;
    
    char currentChar;
    bool concatenationIsNotPalindrome = !isPalindrome(st + stAppend);
    for(int stringIndex = 0; concatenationIsNotPalindrome; stringIndex++)
    {
        //get the element and add it to the begin of the new string
        currentChar = st.at(stringIndex);
        stAppend = currentChar + stAppend;
        
        concatenationIsNotPalindrome = !isPalindrome(st + stAppend);
    }
    
    //return the concatenation of strings
    return st + stAppend;
}

//--------------------------------------

//checks if a string is palindrome
bool isPalindrome(std::string s)
{
    int startToEnd = 0;
    int endToStart = s.length()-1;
    bool differentCharAtBothSides;
    bool notAtTheCenterOfTheString;
    
    do
    {
        differentCharAtBothSides = s.at(startToEnd) != s.at(endToStart);
        if(differentCharAtBothSides) return false;
        
        startToEnd++;
        endToStart--;
        
        notAtTheCenterOfTheString = startToEnd < endToStart;
    }while (notAtTheCenterOfTheString);
    
    return true;
}