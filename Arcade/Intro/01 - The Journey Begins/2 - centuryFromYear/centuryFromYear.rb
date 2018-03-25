def centuryFromYear(year)

    rest = year % 100
    oldCentury = rest == 0
    
    if oldCentury
        return (year / 100)
    else
        return (year / 100 + 1)
    end
end
