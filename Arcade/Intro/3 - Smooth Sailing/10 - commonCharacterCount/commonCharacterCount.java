int commonCharacterCount(String s1, String s2) {

    int result = 0;
    
    StringBuilder b2 = new StringBuilder(s2);
    
    for(int s1Index = 0; s1Index < s1.length(); s1Index++)
    {
        for(int s2Index = 0; s2Index < s2.length(); s2Index++)
        {
            boolean foundEqualChars = s1.charAt(s1Index) == b2.charAt(s2Index);
            if(foundEqualChars)
            { 
                b2.setCharAt(s2Index, '*');
                
                result++;
                break;
            }
        }
    }
    
    return result;
}
