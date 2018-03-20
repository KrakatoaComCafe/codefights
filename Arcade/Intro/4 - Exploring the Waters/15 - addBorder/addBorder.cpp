std::vector<std::string> addBorder(std::vector<std::string> picture) {

    int originalStringLength = picture[0].length();
    //creates a vector with 2 more positions to hold the new matrix 
    std::vector<std::string> borderMatrix (picture.size()+2, "");
    
    for(int row = 0; row < borderMatrix.size(); row++)
    {
        bool atFirstPosition = row == 0;
        bool atLastPosition = row == borderMatrix.size()-1;
        
        if(atFirstPosition || atLastPosition)
        {
            for(int col = 0; col < originalStringLength+2; col++)
                borderMatrix[row] += "*";
        } else {
            std::string originalContent = picture.at(row-1);
            borderMatrix[row] += "*" + originalContent + "*";
        }
    }
    
    return borderMatrix;
}
