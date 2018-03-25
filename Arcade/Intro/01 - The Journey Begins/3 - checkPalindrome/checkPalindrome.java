boolean checkPalindrome(String inputString) {

    for(int i = 0; i < inputString.length(); i++)
    {
        char charLeftToRight = inputString.charAt(i);
        char charRightToLeft = inputString.charAt(inputString.length()-i-1);
        boolean charsAreDifferent = charLeftToRight != charRightToLeft;
        
        if(charsAreDifferent) return false;
    }
    return true;
}
