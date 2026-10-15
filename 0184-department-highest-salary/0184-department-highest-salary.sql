# Write your MySQL query statement below
SELECT d.name as Department,
e.name as Employee,
e.salary as Salary 
From Employee e 
JOIN Department d
ON e.departmentId=d.id
WHERE e.salary=(SELECT max(e2.salary) FROM employee as e2
WHERE e2.departmentID=e.departmentId);