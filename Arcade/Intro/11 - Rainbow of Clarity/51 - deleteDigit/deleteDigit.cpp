int deleteDigit(int n) {

    int currentValor;
    int maxValor;
    //string numberBackup will keep the original number, and the auxString will keep the number with a deleted digit
    std::string numberBackup;
    std::string auxString;
    
    numberBackup = std::to_string(n);
    maxValor = -1;
    
    //goes through the string with the original number
    for(int index = 0; index < numberBackup.length(); index++) {
        
        //copy the number and erase the current position
        auxString = numberBackup;
        auxString.erase(index, 1);
        
        //change auxString to int and checks if the current value is bigger than the max value
        currentValor = std::stoi(auxString);
        bool currentValorIsBigger = currentValor > maxValor;
        if(currentValorIsBigger) maxValor = currentValor;
    }
    
    return maxValor;
}
