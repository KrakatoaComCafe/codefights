int growingPlant(int upSpeed, int downSpeed, int desiredHeight) {

    int sizePlant = 0;
    int count = 0;
    bool reachedDesiredHeight;
    
    do
    {
        sizePlant += upSpeed;
        count++;
        reachedDesiredHeight = sizePlant >= desiredHeight;
        if(reachedDesiredHeight) break;
        sizePlant -= downSpeed;
    }while(true);
    
    return count;
}
