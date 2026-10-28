# Write your MySQL query statement below
SELECT d.name as department,e.name as Employee,e.salary as Salary
FROM employee as e
JOIN department as d
ON e.departmentID=d.id
WHERE e.salary=(SELECT max(e2.salary ) from employee e2
WHERE e2.departmentId=e.departmentId);

