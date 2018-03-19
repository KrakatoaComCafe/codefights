
_Sudoku_  is a number-placement puzzle. The objective is to fill a  `9 × 9`  grid with digits so that each column, each row, and each of the nine  `3 × 3`  sub-grids that compose the grid contains all of the digits from  `1`  to  `9`.

This algorithm should check if the given grid of numbers represents a correct solution to Sudoku.

**Example**

For the first example below, the output should be  `true`. For the other grid, the output should be  `false`: each of the nine  `3 × 3`  sub-grids should contain all of the digits from  `1`  to  `9`.

![](https://codefightsuserpics.s3.amazonaws.com/tasks/sudoku/img/sudoku.png?_tm=1494791407147)

**Input/Output**

-   **\[execution time limit\] 0.5 seconds (cpp)**
    
-   **\[input\] array.array.integer grid**
    
    A matrix representing  `9 × 9`  grid already filled with numbers from  `1`  to  `9`.
    
-   **\[output\] boolean**
    
    `true`  if the given grid represents a correct solution to Sudoku,  `false`  otherwise.