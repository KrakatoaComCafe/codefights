/*Please add ; after each select statement*/
CREATE PROCEDURE expressionsVerification()
BEGIN
    SELECT id, a, b, operation, c
    FROM (
        SELECT *, 
        (CASE WHEN operation = '+' THEN a + b 
              WHEN operation = '-' THEN a - b 
              WHEN operation = '*' THEN a * b 
              WHEN operation = '/' THEN a / b 
         END) AS result
         FROM expressions) nt
    WHERE result = c;
END