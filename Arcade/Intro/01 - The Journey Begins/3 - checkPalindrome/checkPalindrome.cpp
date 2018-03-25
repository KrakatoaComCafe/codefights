bool checkPalindrome(std::string inputString) {
    
    for(int i = 0; i < inputString.size()-1; i++)
    {
        char charLeftToRight = inputString.at(i);
        char charRightToLeft = inputString.at(inputString.size()-i-1);
        bool charsAreDifferent = charLeftToRight != charRightToLeft;
            
        if(charsAreDifferent) return false;
    }
    
    return true;
}
