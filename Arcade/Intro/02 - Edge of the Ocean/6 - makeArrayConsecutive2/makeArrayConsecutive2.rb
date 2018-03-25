def makeArrayConsecutive2(statues)
    min = 9999
    max = -1
    
    statues.each { |num|
        update_min = num < min
        update_max = num > max
        
        if(update_min)
            min = num
        end
        if(update_max)
            max = num
        end
    }
    
    return (max-min)-(statues.length-1)
end