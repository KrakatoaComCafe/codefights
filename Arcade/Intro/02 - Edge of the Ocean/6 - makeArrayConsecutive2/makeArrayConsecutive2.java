int makeArrayConsecutive2(int[] statues) {
    
    int biggest = -1;
    int smallest = 9999;
    
    for(int i = 0; i < statues.length; i++)
    {
        boolean updateSmallest = smallest > statues[i];
        boolean updateBiggest = biggest < statues[i];
        
        if(updateSmallest) smallest = statues[i];
        if(updateBiggest) biggest = statues[i];
    }
    
    int result = (biggest-smallest) - (statues.length-1) ;
    
    return result;
}
