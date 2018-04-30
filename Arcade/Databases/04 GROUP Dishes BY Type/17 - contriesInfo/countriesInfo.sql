/*Please add ; after each select statement*/
CREATE PROCEDURE countriesInfo()
BEGIN

    DECLARE maxRow INTEGER;
    DECLARE totalPopulation INTEGER;

    SET maxRow = (SELECT COUNT(DISTINCT(name)) FROM countries);
    SET totalPopulation = (SELECT SUM(population) FROM countries);

    SELECT maxRow as number, (totalPopulation/maxRow) as average, totalPopulation as total;
	
END