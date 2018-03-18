int digitsProduct(int product) {

    //vector to hold the values of dividers
    std::vector<int> elements;
    //initial divider, goes from 9 to 1
    int divi = 9;
    int result = 0;
    
    //test 4 and 6
    if(product == 0) return 10;
    if(product == 1) return 1;
    
    //goes through the dividers, 9 to 1
    while(divi > 1) {
        //if the remainder is zero, the product is divided and the divisor is add to the vector
        while((product % divi) == 0) {
            product = product / divi;
            elements.insert(elements.begin(),divi);
        }
        divi--;
    }
    
    //no divisor was found
    if(product > 1) return -1;
    
    //rearrange the divisors so that a unique value is created
    for(int i = 0; i < elements.size(); i++) {
        result = (result * 10) + elements.at(i);
    }
    
    return result;
}