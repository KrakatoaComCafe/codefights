def almostIncreasingSequence(sequence)
    count = 0
    
    i = (sequence.length) -1
    i.times do |pos| 
        
        if pos > 0 && pos < (sequence.length)-2 &&
           sequence[pos] >= sequence[pos+1] &&
           sequence[pos] >= sequence[pos+2] &&
           sequence[pos-1] >= sequence[pos+1]
            return false
        end
        
        count += 1 if sequence[pos] >= sequence[pos+1]
        return false if count > 1
    end
    
    return false if count > 1
    return true
end