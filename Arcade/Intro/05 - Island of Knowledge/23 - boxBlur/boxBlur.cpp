std::vector<std::vector<int>> boxBlur(std::vector<std::vector<int>> image) {

    std::vector<std::vector<int> > result (image.size()-2);
    
    for(int row = 1; row < image.size()-1; row++)
    {
        //resize each position of the first array to fit the new elements
        result[row-1].resize(image[row].size()-2);
        
        for(int col = 1; col < image[row].size()-1; col++)
        {
            int value = get3x3Sum(image,row,col);
            bool wentOutOfTheMatrix = value == -1;
            
            if(wentOutOfTheMatrix) {
                continue;
            } else {
                result[row-1][col-1] = value;
            }
        }
    }
    return result;
}

int get3x3Sum(std::vector<std::vector<int> > matrix, int row, int col)
{
    bool accessingOutOfTheMatrix = row < 1 || col < 1 || row > matrix.size()-1 || col > matrix[0].size()-1;
    if(accessingOutOfTheMatrix) return -1;
    
    int sum = 0;
    
    //goes through the 3x3, sum every element
    for(int currentRow = row - 1; currentRow <= row + 1; currentRow++)
    {
        for(int currentColumn = col - 1; currentColumn <= col + 1; currentColumn++)
        {
            sum += matrix[currentRow][currentColumn];
        }
    }
    
    return (int)sum/9;
}