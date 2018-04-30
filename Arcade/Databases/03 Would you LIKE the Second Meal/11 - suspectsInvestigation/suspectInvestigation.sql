/*Please add ; after each select statement*/
CREATE PROCEDURE suspectsInvestigation()
BEGIN
    SELECT id, name, surname
        FROM Suspect
        WHERE surname LIKE 'Gre%n'
        AND length(surname) = 5
        AND name LIKE 'B%'
        AND height <= 170;
    
END