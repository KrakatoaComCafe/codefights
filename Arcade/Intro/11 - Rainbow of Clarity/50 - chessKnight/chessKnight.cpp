int chessKnight(std::string cell) {

    //i work better with x and y
    int x;
    int y;
    
    //change the letters to numbers, now they are int and the bottom (A to H) now goes 1 to 8 using the variable x
    x = cell.at(0) - 'a' + 1;
    y = cell.at(1) - '1' + 1;
    
    //since the positions are mirroed, we limit it to one quadrant... x and y goes from 1 to 4
    if(x > 4) x = 9 - x;
    if(y > 4) y = 9 - y;
    
    //now if the sum of x and y results 6 or more, the horse can move at free will
    if(x+y >= 6) 
        return 8;
    //if the position of the horse is at border of the chessboard, the possible positions are the sum of the current coordinates
    else if(x == 1 || y == 1) 
        return (x + y);
    //all the area in between allows the horse to move in the same amount of positions as the result of the 
    //multiplication from the current coordinates
    else return (x * y);
}
