def almostIncreasingSequence(sequence)
    count = 0
    
    i = (sequence.length) -1
    i.times do |pos| 
        
        not_access_out_of_array = sequence[pos+2] != nil
        if not_access_out_of_array
            
            bigger_than_the_next_two = (sequence[pos] >= sequence[pos+1]) && (sequence[pos] >= sequence[pos+2])
            previous_is_bigger_than_next = (sequence[pos-1] >= sequence[pos+1])

            if pos > 0 && bigger_than_the_next_two && previous_is_bigger_than_next
                return false
            end
        end
        
        bigger_than_nex = sequence[pos] >= sequence[pos+1]
        count += 1 if bigger_than_nex
        return false if count > 1
    end
    
    return false if count > 1
    return true
end