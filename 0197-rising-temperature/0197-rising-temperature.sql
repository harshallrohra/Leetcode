# Write your MySQL query statement below
SELECT w.id AS Id
FROM Weather as w 
WHERE EXISTS (
    SELECT 1
    FROM Weather AS y 
    WHERE y.recordDate = DATE_SUB(w.recordDate , INTERVAL 1 DAY)
    AND w.temperature > y.temperature


);
