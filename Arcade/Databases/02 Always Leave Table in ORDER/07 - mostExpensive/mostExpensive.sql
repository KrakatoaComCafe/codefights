/*Please add ; after each select statement*/
CREATE PROCEDURE mostExpensive()
BEGIN
	SELECT nt.name FROM ( (SELECT name, (price * quantity) AS value FROM Products ORDER BY value desc, name asc LIMIT 1)  ) nt
    ;
END