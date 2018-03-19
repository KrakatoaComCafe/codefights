
A string is said to be  _beautiful_  if  `b`  occurs in it no more times than  `a`;  `c`  occurs in it no more times than  `b`; etc.

Given a string, check whether it is  _beautiful_.

**Example**

-   For  `inputString = "bbbaacdafe"`, the output should be  
    `isBeautifulString(inputString) = true`;
-   For  `inputString = "aabbb"`, the output should be  
    `isBeautifulString(inputString) = false`;
-   For  `inputString = "bbc"`, the output should be  
    `isBeautifulString(inputString) = false`.

**Input/Output**

-   **\[execution time limit\] 0.5 seconds (cpp)**
    
-   **\[input\] string inputString**
    
    A string of lowercase letters.
    
    _Guaranteed constraints:_  
    `3 ≤ inputString.length ≤ 50`.
    
-   **\[output\] boolean**