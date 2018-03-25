bool almostIncreasingSequence(std::vector<int> sequence) {

    int count = 0;
    
    for(int index = 0; index < sequence.size()-1; index++)
    {
        bool currentIsBiggerThanNext = sequence.at(index) >= sequence.at(index+1);
        bool notAccessOutOfArray = index > 0 && index < sequence.size()-2;
        
        if ( notAccessOutOfArray ) {
            bool currentIsBiggerThanNextTwo = currentIsBiggerThanNext && sequence.at(index) >= sequence.at(index+2);
            bool previousIsBiggerThanNext = sequence.at(index-1) >= sequence.at(index+1);
            
            if(currentIsBiggerThanNextTwo && previousIsBiggerThanNext) {
                return false;
            }
        }
        
        if(currentIsBiggerThanNext) count++;
        
        if(count > 1) return false;
    }
    
    if(count > 1) return false;
    return true;
}
