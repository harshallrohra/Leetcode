# Write your MySQL query statement below
SELECT d.name AS Department ,e.name AS Employee, e.salary AS Salary 
FROM Employee as e
JOIN Department d 
ON d.id= e.departmentId
WHERE Salary = (
    SELECT  MAX(e2.Salary) 
    FROM Employee as e2
    WHERE e2.departmentId = e.departmentId 
);