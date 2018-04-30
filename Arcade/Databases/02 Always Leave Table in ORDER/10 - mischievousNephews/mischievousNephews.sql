/*Please add ; after each select statement*/
CREATE PROCEDURE mischievousNephews()
BEGIN
    CREATE TEMPORARY TABLE IF NOT EXISTS result AS
        SELECT WEEKDAY(mischief_date) as weekday,
        mischief_date, author, title
        FROM mischief
        ORDER BY weekday ASC, FIND_IN_SET(author, 'Huey,Dewey,Louie') ASC, mischief_date, title;

    SELECT * FROM result;
    DROP TABLE IF EXISTS result;
END