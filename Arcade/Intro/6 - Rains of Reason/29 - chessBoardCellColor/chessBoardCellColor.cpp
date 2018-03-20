bool chessBoardCellColor(std::string cell1, std::string cell2) {
    
    std::vector<bool> c1_rest_x_y;
    std::vector<bool> c2_rest_x_y;
    
    //If the row and column of a cell are both even (or odd) they have a 
    //darker color (assuming you're using the picture from the example).
    //If the cell has an odd and even value at the same time, the color will be lighter.
    
    c1_rest_x_y.push_back( (int)cell1.at(0) % 2 == 0 );
    c1_rest_x_y.push_back( (int)cell1.at(1) % 2 == 0 );
    c2_rest_x_y.push_back( (int)cell2.at(0) % 2 == 0 );
    c2_rest_x_y.push_back( (int)cell2.at(1) % 2 == 0 );
    
    bool cell1_is_darker = c1_rest_x_y[0] == c1_rest_x_y[1];
    bool cell2_is_darker = c2_rest_x_y[0] == c2_rest_x_y[1];
    bool cell1_is_lighter = c1_rest_x_y[0] != c1_rest_x_y[1];
    bool cell2_is_lighter = c2_rest_x_y[0] != c2_rest_x_y[1];
   
    if( cell1_is_darker && cell2_is_darker )
    {
        return true;
    }
    else if ( cell1_is_lighter && cell2_is_lighter )
    {
        return true;
    }
    return false;
}
