std::string longestWord(std::string text) {

    //variables to hold the longest word and the vector with all possible words
    std::string word;
    std::vector<std::string> words;
    
    //the string is divided into a vector of strings, holding one world per position
    words = explode(text);
    
    //return the longest word
    word = getLongestWord(words);
    
    //showVector(words);
    
    return word;
}

//****************************
//
//          Logic
//
//****************************

//explode the string into a vector of strings
std::vector<std::string> explode(std::string str) {
    
    std::vector<std::string> result;
    std::string auxString; //auxiliar string to build the word
    auxString.clear();
    
    //goes through the string
    for(int index = 0; index < str.length(); index++) {
        bool stringAuxNotEmpty = !auxString.empty();
        char currentChar = str.at(index);
        bool currentCharIsAlphaNumeric = std::isalpha(currentChar);
        
        if(index > 0) {
            char previousChar = str.at(index-1);
            bool lastCharNotAlphaNumeric = !std::isalpha(previousChar);
            
            if(lastCharNotAlphaNumeric && currentCharIsAlphaNumeric && stringAuxNotEmpty )
            {
                insertTheWord(&result, &auxString);
            }
        }

        
        if ( currentChar == ' ' && stringAuxNotEmpty ) {
            insertTheWord(&result, &auxString);
        }
        
        if (currentCharIsAlphaNumeric) { 
            auxString += currentChar;
        }
    }
    
    //a little encore, and we are done
    insertTheWord(&result, &auxString);
    
    return result;
}

//check for the longest word and return it
std::string getLongestWord(std::vector<std::string> words) {
    
    //holds the current and max length form the words
    int currentLength = 0;
    int maxLength = 0;
    //holds the index of the longest word
    int indexLongestWord = 0;
    
    for(int index = 0; index < words.size(); index++) {
        //get the length of the current word
        currentLength = words.at(index).length();
        
        //check to see if the current length is bigger than the max length
        if(currentLength > maxLength) {
            //saves the length and the index
            maxLength = currentLength;
            indexLongestWord = index;
        }
    }
    
    return words.at(indexLongestWord);
}

//add the word to the vector of words and clear the auxiliar string
void insertTheWord(std::vector<std::string> *result, std::string *aux) {
    result->push_back(*aux);
    aux->clear();
}

/*****************************************************/
// test
void showVector(std::vector<std::string> v) {
    for(int i = 0 ; i < v.size();i++) {
        cout << v.at(i) << endl;
    }
}