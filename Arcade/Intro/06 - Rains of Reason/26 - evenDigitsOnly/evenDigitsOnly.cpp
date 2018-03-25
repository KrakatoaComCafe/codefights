bool evenDigitsOnly(int n) {

    std::string str = std::to_string(n);
    
    for(int index = 0; index < str.length(); index++)
    {
        int currentNumber = (int)str.at(index);
        bool currentNumberIsOdd = (currentNumber) % 2 != 0;
        if( currentNumberIsOdd ) return false;
    }
    
    return true;
}
