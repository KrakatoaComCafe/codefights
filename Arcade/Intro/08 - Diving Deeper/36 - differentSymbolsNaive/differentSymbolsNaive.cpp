int differentSymbolsNaive(std::string s) {

    std::unordered_set<char> differentChars;
    
    for(int i = 0; i < s.length(); i++)
    {
        differentChars.insert(s.at(i));
    }
    
    return differentChars.size();
}
