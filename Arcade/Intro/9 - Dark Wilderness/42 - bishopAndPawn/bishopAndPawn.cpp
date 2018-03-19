bool bishopAndPawn(std::string bishop, std::string pawn) {

    //get the position in integer
    std::vector<int> bishop_xy = positionToInteger(bishop);
    std::vector<int> pawn_xy = positionToInteger(pawn);
    
    cout  << "Bishop - \tX: " << bishop_xy[0] << " Y: " << bishop_xy[1] << endl;
    cout  << "Pawn - \t\tX: " << pawn_xy[0] << " Y: " << pawn_xy[1] << endl;
    
    int x, y;
    
    x = abs( bishop_xy[0] - pawn_xy[0] );
    y = abs( bishop_xy[1] - pawn_xy[1] );
    
    if(x == y) return true;
    return false;
}


std::vector<int> positionToInteger(std::string str)
{
    std::vector<int> position (2, 0);
    
    for(int i = 0; i < str.length(); i++)
    {
        char currentChar = str.at(i);
        position[i] = currentChar;
    }
    
    position[0] -= '`'; // '`' is right before 'a' in the ascii table
    position[1] -= '0';
    return position;
}