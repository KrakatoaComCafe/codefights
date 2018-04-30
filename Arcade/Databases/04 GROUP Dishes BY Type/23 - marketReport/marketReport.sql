/*Please add ; after each select statement*/
CREATE PROCEDURE marketReport()
BEGIN
	(SELECT country, COUNT(competitor) AS competitors
    FROM foreignCompetitors
    GROUP BY country
    ORDER BY country)
    UNION
    (SELECT 'Total:' as country, COUNT(competitor) as competitors
    FROM foreignCompetitors);
END