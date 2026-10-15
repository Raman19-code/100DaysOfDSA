# Write your MySQL query statement below
SELECT d.name as Department,
e.name as Employee ,e.salary as Salary
From Employee as e
JOIN Department d
ON e.departmentID=d.id
WHERE e.salary=(SELECT max(e2.salary)from employee e2
WHERE e2.departmentId=e.departmentid);