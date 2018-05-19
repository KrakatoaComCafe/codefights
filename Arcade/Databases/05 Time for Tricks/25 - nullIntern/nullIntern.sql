/*Please add ; after each select statement*/
CREATE PROCEDURE nullIntern()
BEGIN
	SELECT COUNT(id) as number_of_nulls
    FROM departments
    WHERE description IS NULL
    OR REPLACE(description, ' ', '') LIKE 'NULL'
    OR REPLACE(description, ' ', '') LIKE 'nil'
    OR REPLACE(description, ' ', '') = '-';

END