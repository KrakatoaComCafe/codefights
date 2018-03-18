def allLongestStrings(inputArray)
    length = inputArray.map(&:length).max
    resultArray = Array.new
    
    resultArray = inputArray.select{ |str| str if str.length == length }
    
end