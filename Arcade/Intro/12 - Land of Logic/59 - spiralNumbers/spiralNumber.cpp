std::vector<std::vector<int>> spiralNumbers(int n) {

    std::vector<std::vector<int>> result (n, std::vector<int>(n));
    
    //variable to walk the edge of the matrix; as the layer is incremented the edge gets closer to the center of the matrix
    int layer = 0;
    //holds the value that the tile of the matrix will receive
    int value = 1;
    //the amount of steps will be need to walk the get around the matrix
    int steps = n;
    
    //oh boy, did i lost time on this one...
    someKindOfMagic(&result, layer, value, n, steps);
    
    return result;
}

//goes around (outside to inside) a NxN matrix, setting a value to every tile it visits, starting from 1 and finishing at N*N
void someKindOfMagic(std::vector<std::vector<int>>* matrix, int layer, int value, int num, int steps) {
    
    bool recheadCenter = value >= num*num;
    if(recheadCenter) {
        bool squareMatrixWithOddNumber = num % 2 != 0;
        if(squareMatrixWithOddNumber) matrix->at(layer).at(layer) = num*num;
        return;
    }
    
    int currentRow = layer;
    int currentCollumn = layer;
    
    //each time this magic method is called, the "layer" is incremented, "layer" = 0 means you're the most distant from 
    //the center as you can be; as you approach the center, the value of "layer" will get higher and higher
    
    //"steps" is the amount of tiles you will pass through, lets say the steps is set to 5, you will walk:
    //5 steps to the right   - walk <steps> tiles
    //4 steps to the bottom  - walk <steps-1> tiles
    //4 steps to the left    - walk <steps-1> tiles
    //3 steps to the top     - walk <steps-2> tiles
    
    //goes from left to right
    for(int i = currentCollumn; i < steps+layer; i++) {
        matrix->at(currentRow).at(i) = value++;
        currentCollumn = i;
    }
    
    //goes from top to bottom
    for(int i = layer+1; i < steps+layer; i++) {
        matrix->at(i).at(currentCollumn) = value++;
        currentRow = i;
    }
    
    //goes from left to right
    for(int i = currentCollumn-1; i >= layer; i--) {
        matrix->at(currentRow).at(i) = value++;
        currentCollumn = i;
    }
    
    //goes from bottom to top
    for(int i = currentRow-1; i >= layer+1; i--) {
        matrix->at(i).at(currentCollumn) = value++;
        currentRow = i;
    }
    
    steps -=2;
    layer++;
    
    someKindOfMagic(matrix, layer, value, num, steps);
}
