def shapeArea(n)

    if(n == 1) 
        return 1
    end
    if(n == 2) 
        return n*n+1 
    end
    
    border = (n-1)*4
    inside = shapeArea(n-1)
    
    return border + inside
end