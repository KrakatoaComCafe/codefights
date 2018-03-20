def adjacentElementsProduct(inputArray)
    
    max = -99999
    i = 0
    
    loop do
        found_a_bigger_number = inputArray[i]*inputArray[i+1] > max
        
        if(found_a_bigger_number)
            max = inputArray[i]*inputArray[i+1]
        end
        i += 1
        break if i+1 == inputArray.length
    end
    
    return max
end
