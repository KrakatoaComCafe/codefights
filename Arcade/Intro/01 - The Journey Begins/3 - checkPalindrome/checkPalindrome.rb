def checkPalindrome(inputString)
    isPalindrome = inputString == inputString.reverse
    
    if isPalindrome
        return true
    end
    return false
end
