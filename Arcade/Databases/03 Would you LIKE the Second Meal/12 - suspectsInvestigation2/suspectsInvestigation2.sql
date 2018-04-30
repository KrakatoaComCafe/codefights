/*Please add ; after each select statement*/
CREATE PROCEDURE suspectsInvestigation2()
BEGIN
	SELECT id, name, surname
    FROM Suspect
    WHERE height <= 170
    OR surname NOT LIKE 'Gre%n' 
    OR length(surname) != 5
    OR name NOT LIKE 'B%'; 
END