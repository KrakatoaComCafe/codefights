def nCash(m, p)
    if p == 0
        return 1 if m.include? p
        return 0
    end
    
    count = 0
    aux = 0
    m = m.sort_by { |num| -num }
    
    m.each do |num|
        sub = p-num
        loop do
            if p-num >= 0
                count +=1
                p -= num
            end
            break if p-num < 0
        end
    end
    
    count
end