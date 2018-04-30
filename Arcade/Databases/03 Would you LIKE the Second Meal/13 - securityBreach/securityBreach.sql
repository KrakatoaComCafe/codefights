/*Please add ; after each select statement*/
CREATE PROCEDURE securityBreach()
BEGIN
	SELECT *
    FROM users
    WHERE attribute LIKE CONCAT('%',first_name,'_',second_name,'%')
    AND first_name = BINARY SUBSTRING(attribute,LOCATE('%',attribute)+1, LENGTH(first_name))
    AND second_name = BINARY SUBSTRING(attribute,LOCATE('_',attribute)+1, LENGTH(second_name))
    AND LENGTH( SUBSTRING(attribute,1,LOCATE('%',attribute) -1) ) > 0;
END