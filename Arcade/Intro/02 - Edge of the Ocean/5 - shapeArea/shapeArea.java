int shapeArea(int n) {

    if(n == 1) return n;
    if(n == 2) return n*n+1;
    
    int innerArea;
    int outterArea;
    
    outterArea = (n-1)*4;
    
    innerArea = shapeArea( (n-1) );
    
    return innerArea + outterArea;
}
