boolean isLucky(int n) {
    
    String number = String.valueOf(n);
    int sumLeft = 0;
    int sumRight = 0;
    
    boolean lengthIsAnOddNumber = number.length() % 2 != 0;
    if(lengthIsAnOddNumber) return false;
    
    for(int i = 0; i < number.length(); i++)
    {
        boolean addingTheFirstHalf = i < number.length()/2;
        if(addingTheFirstHalf)
        {
            sumLeft += Character.getNumericValue(number.charAt(i));
        }
        else sumRight += Character.getNumericValue(number.charAt(i));
    }
    
    boolean bothValuesAreEqual = sumLeft == sumRight;
    if(bothValuesAreEqual) return true;
    
    return false;
}
