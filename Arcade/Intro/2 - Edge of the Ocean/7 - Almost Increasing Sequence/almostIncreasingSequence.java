boolean almostIncreasingSequence(int[] sequence) {

    int count = 0;
    
    for(int index = 0; index < sequence.length-1; index++)
    {
        boolean currentIsBiggerThanNext = sequence[index] >= sequence[index+1];
        boolean notAccessOutOfArray = index > 0 && index < sequence.length-2;
        
        if(notAccessOutOfArray) {
            boolean currentIsBiggerThanNextTwo = currentIsBiggerThanNext && sequence[index] >= sequence[index+2];
            boolean previousIsBiggerThanNext = sequence[index-1] >= sequence[index+1];
            
            if( currentIsBiggerThanNextTwo && previousIsBiggerThanNext) return false;
        }
        if(currentIsBiggerThanNext) count++;
        
        if(count > 1) return false;
    }
    
    if(count > 1) return false;
    return true;
}
