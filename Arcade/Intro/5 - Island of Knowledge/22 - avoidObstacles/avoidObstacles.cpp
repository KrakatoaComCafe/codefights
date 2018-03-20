int avoidObstacles(std::vector<int> inputArray) {

    int misterHops = 2;
    int mult = 1;
    sort(inputArray.begin(), inputArray.end());
    for(int i = 0; i < inputArray.size(); i++)
    {
        while(misterHops*mult <= inputArray[i])
        {
            mult++;
        }
        mult--;
        if(misterHops*mult == inputArray[i])
        {
            misterHops++;
            mult = 1;
            i = -1;
        }
    }
    
    return misterHops;
}
