bool stringsRearrangement(std::vector<std::string> inputArray) {
    
    while(next_permutation(inputArray.begin(), inputArray.end())) {
        bool flag = true;
        
        for(int i = 0; i < inputArray.size() - 1; i++) {
            std::string currentString = inputArray[i];
            int amountDifferentChars = 0;
            
            for(int j = 0; j < currentString.length(); j++)
            {
                std::string nextString = inputArray[i+1];
                bool differentCharsInSamePosition = currentString.at(j) != nextString.at(j);
                if(differentCharsInSamePosition) 
                    amountDifferentChars++;
            
                bool tooMuchDifferentChars = amountDifferentChars > 1;
                if(tooMuchDifferentChars) break;
            }
            bool cantRearrange = amountDifferentChars != 1;
            if(cantRearrange)
            { 
                flag = false; 
                break;
            }
        }
        if(flag) return true;
    }
    return false;
}

/**************************************/
//test
void showVector(std::vector<std::string> inputArray) {
    for(auto&& string : inputArray) {
        cout << string << endl;
    }
    cout << endl;
}