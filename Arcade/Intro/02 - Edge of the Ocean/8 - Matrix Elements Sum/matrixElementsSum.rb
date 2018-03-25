def matrixElementsSum(matrix)
    sum = 0
    
    matrix = matrix.transpose
    
    matrix.each do |row|
        row.each do |element|
            sum += element if element > 0
            break if element == 0
        end
    end
    
    return sum
end