
Correct variable names consist only of English letters, digits and underscores and they can't start with a digit.

Check if the given string is a correct variable name.

**Example**

-   For  `name = &quot;var_1__Int&quot;`, the output should be  
    `variableName(name) = true`;
-   For  `name = &quot;qq-q&quot;`, the output should be  
    `variableName(name) = false`;
-   For  `name = &quot;2w2&quot;`, the output should be  
    `variableName(name) = false`.

**Input/Output**

-   **\[execution time limit\] 0.5 seconds (cpp)**
    
-   **\[input\] string name**
    
    _Guaranteed constraints:_  
    `1 ≤ name.length ≤ 10`.
    
-   **\[output\] boolean**
    
    `true`  if  `name`  is a correct variable name,  `false`  otherwise.