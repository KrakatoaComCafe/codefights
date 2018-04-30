/*Please add ; after each select statement*/
CREATE PROCEDURE gradeDistribution()
BEGIN
    SELECT name AS Name, id AS ID
        FROM Grades 
        WHERE (Midterm1*0.25 + Midterm2*0.25 + Final*0.5) < (Final)
        AND (Midterm1*0.5 + Midterm2*0.5) < (Final)
        ORDER BY LEFT(name,3), id;
END