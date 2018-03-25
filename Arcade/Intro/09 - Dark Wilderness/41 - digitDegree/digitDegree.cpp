int digitDegree(int n) {

    int count;
    std::string strNumber;
    
    strNumber = std::to_string(n);
    for(count = 0; strNumber.length() > 1; count++)
    {
        int sum = sumDigitsInString(strNumber);
        strNumber = std::to_string(sum);
    }
    
    return count;
}


//return the sum of each digit of the string
int sumDigitsInString(std::string str)
{
    int sum = 0;
    char fixToInt = '0';
    
    for(int i = 0; i < str.length(); i++)
    {
        char currentChar = str.at(i);
        sum += currentChar - fixToInt;
    }
    
    return sum;
}