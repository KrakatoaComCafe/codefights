You have an array  `m`  with the values of the country's paper money.  
Determine the minimum amount of paper money to buy the amount  `p`. If you cannot pay exactly, then return  `0`.

**Example**  
For  `m = [1, 2, 5, 10, 20, 50, 100]`  and  `p = 125`, the output should be  
`nCash(m, p) = 3`.  
You should pay with  `100, 20, 5`.

-   **\[execution time limit\] 4 seconds (rb)**
    
-   **\[input\] array.integer m**
    
    _Guaranteed constraints:_  
    `m.length < 100`.
    
-   **\[input\] integer p**
    
    _Guaranteed constraints:_  
    `0 ≤ p ≤ 10^9`.
    
-   **\[output\] integer**