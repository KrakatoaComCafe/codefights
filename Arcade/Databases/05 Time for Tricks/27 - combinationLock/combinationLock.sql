/*Please add ; after each select statement*/
CREATE PROCEDURE combinationLock()
BEGIN
    DECLARE done INTEGER DEFAULT 0;
    DECLARE mult BIGINT DEFAULT 1;
    DECLARE aux INTEGER DEFAULT 0;

    DECLARE charLength_cursor CURSOR FOR 
        SELECT LENGTH(characters)
        FROM discs;

    DECLARE CONTINUE HANDLER FOR NOT FOUND SET done = 1;
    OPEN charLength_cursor;

    REPEAT
        FETCH NEXT FROM charLength_cursor INTO aux;
        IF NOT done THEN       
            SET mult = mult * aux;
        END IF;
    UNTIL done END REPEAT;

    CLOSE charLength_cursor;

    SELECT mult AS "combinations";
    
END