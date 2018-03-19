std::string findEmailDomain(std::string address) {

    std::string domain;
    int index;
    bool foundAT;
    for(index = address.length()-1; index >= 0; index--)
    {
        foundAT = address.at(index) == '@';
        if(foundAT) break;
    }
    
    domain = address.substr(index+1, address.length()-1);
    
    return domain;
}
