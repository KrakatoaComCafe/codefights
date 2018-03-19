std::string messageFromBinaryCode(std::string code) {

    const int numBits = 8;
    //vector of bitset to hold the bits in groups of 8
    std::vector<std::bitset<numBits>> codeBits;
    //string to build the result
    std::string result;

    //break the string into a vector, each element is a bitset holding 8 bits
    codeBits = explodeString8(code);

    result = vectorOfBitsToString(&codeBits);

    return result;
}

//*******************************
//
//         Logic
//
//*******************************

//break the string into a vector, each element is a bitset holding 8 bits
std::vector<std::bitset<8>> explodeString8(std::string code) {

    const int numBits = 8;
    std::vector<std::bitset<numBits>> result;
    std::string auxString;

    for(int index = 1; (index-1) < code.length(); index++) {
        bool thereAre8Bits = (index % numBits) == 0;

        if(thereAre8Bits) {
            add8Bits(&result, &auxString);
        }
        else { //add the current char to the auxiliar string
            auxString += code.at(index);
        }
    }
    add8Bits(&result, &auxString);

    return result;
}

//add the bits to the vector and resets the string
void add8Bits(std::vector<std::bitset<8>>* result, std::string* strBits) {
    std::bitset<8> bits = bitset<8>(*strBits);

    result->push_back(bits);
    strBits->clear();
}

//create a string with the vector of bits, returns the string
std::string vectorOfBitsToString(std::vector<std::bitset<8>>* codeBits) {
    std::string result;

    for(auto&& bits : *codeBits) {
        unsigned long int currentInt = bits.to_ulong();
        char currentChar = (char)currentInt;
        bool thereIsCharToAdd = currentInt != 0;

        if(thereIsCharToAdd)
            result += currentChar;
    }

    return result;
}

/******************************************************/
//test
void showVector(std::vector<std::bitset<8>> v) {
    for(auto&& str : v) {
        cout << str << endl;
    }
}
