bool validTime(std::string time) {
    
    //vector to hold the hour and min
    std::vector<int> vectorTime;
    
    //divide the string into an array of int, using the ':' to break the string
    vectorTime = explode(time, ':');

    return isTimeValid(vectorTime);
}

//*************************
//
//          Logic
//
//*************************

//explode the string into a vector of int, using the char send as delimiter to break the string
std::vector<int> explode(std::string str, char delimiter) {
    
    std::vector<int> result;
    std::string auxString; //auxiliar string to build up the hour and min
    
    for(int index = 0; index < str.length(); index++) {
        char currentChar = str.at(index);
        bool delimiterIsFound = currentChar == delimiter;
        bool auxStringNotEmpty = !auxString.empty();
        
        if(delimiterIsFound && auxStringNotEmpty) {
            addToVector(&result, &auxString);
        }
        else {
            auxString += currentChar;
        }
    }
    
    addToVector(&result, &auxString);
    
    return result;
}

//checks if the values correspond to hours and min
bool isTimeValid(std::vector<int> vectorTime) {
    int hour;
    int min;
    
    hour = vectorTime.at(0);
    min = vectorTime.at(1);
    
    bool invalidHour = hour < 0 || hour > 23;
    bool invalidMin = min < 0 || min > 59;
    
    if(invalidHour || invalidMin) return false;
    
    return true;
}

void addToVector(std::vector<int>* result, std::string* strTime) {
    int time = std::stoi(*strTime);
    result->push_back(time);
    strTime->clear();
}

/********************************************/
//test
void showVector(std::vector<int> v) {
    for(int i = 0; i < v.size(); i++) {
        cout << v.at(i) << endl;
    }
}