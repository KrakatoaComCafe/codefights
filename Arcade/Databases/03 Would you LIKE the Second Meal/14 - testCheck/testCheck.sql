CREATE PROCEDURE testCheck()
    SELECT id, IF (given_answer IS NOT NULL, IF(correct_answer=given_answer, 'correct','incorrect'),'no answer' ) AS checks
    FROM answers
    ORDER BY id;
