std::vector<std::string> fileNaming(std::vector<std::string> names) {

    //set is used to keep the vector from repeat the same name
    std::unordered_set<std::string> setAux;
    //vector will keep the name of the files in order they appear
    std::vector<std::string> result;
    const int maxFilesWithSameName = 999;
    
    //goes through the names
    for(auto&& name : names) {
        bool fileNameIsDuplicated = setAux.find(name) != setAux.end();
        
        if(fileNameIsDuplicated) {
            int appendingNumber = 1;
            
            //tries every number until reachs one that is not used
            while(appendingNumber < maxFilesWithSameName) {
                std::string currentFileName = name + "(" + std::to_string(appendingNumber) + ")";
                bool fileNameNotInSet = !(setAux.find(currentFileName) != setAux.end());
                
                if( fileNameNotInSet ) {
                    addFileName(&setAux, &result, &currentFileName);
                    break;
                }
                else {
                    appendingNumber++;
                }
            }
        }
        else { //if the name does not exists int the set
            addFileName(&setAux, &result, &name);
        }
    }
    return result;
}

void addFileName(std::unordered_set<std::string>* setAux, std::vector<std::string>* result, std::string* fileName) {
    setAux->insert(*fileName);
    result->push_back(*fileName);
}