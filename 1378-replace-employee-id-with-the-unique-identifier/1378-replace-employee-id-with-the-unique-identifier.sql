# Write your MySQL query statement below
SELECT Eu.unique_id,e.name
FROM Employees e
LEFT JOIN EmployeeUNI Eu 
ON  e.id= Eu.id;