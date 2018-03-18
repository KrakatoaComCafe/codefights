boolean almostIncreasingSequence(int[] sequence) {

    int count = 0;
    
    //goes through the array
    for(int i = 0; i < sequence.length-1; i++)
    {
        //return false if there is at least one element before, two after, the current element is bigger than the next two elements, and the element that is before the current element is bigger than the element after the current one
        if( 
           i > 0 &&
           i < sequence.length-2 &&
           sequence[i] >= sequence[i+1] &&
           sequence[i] >= sequence[i+2] &&
           sequence[i-1] >= sequence[i+1]
          ) return false;
        //or a simple check for increasing elements
        else if(sequence[i] >= sequence[i+1]) count++;
        
        if(count > 1) return false;
    }
    
    if(count > 1) return false;
    return true;
}