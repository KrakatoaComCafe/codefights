bool almostIncreasingSequence(std::vector<int> sequence) {

    int count = 0;
    
    for(std::vector<int>::size_type i = 0; i < sequence.size()-1; i++)
    {
        if(i > 0 &&
           i < sequence.size()-2 &&
           sequence.at(i) >= sequence.at(i+1) && 
           sequence.at(i) >= sequence.at(i+2) &&
           sequence.at(i-1) >= sequence.at(i+1))
        {
            return false;
        }
        else if(sequence.at(i) >= sequence.at(i+1)) count++;
        
        if(count > 1) return false;
    }
    
    if(count > 1) return false;
    return true;
}