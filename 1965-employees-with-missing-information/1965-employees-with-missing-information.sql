# Write your MySQL query statement below
SELECT  employee_id from employees
WHERE employee_id NOT IN (SELECT employee_id from salaries)
UNION 
SELECT employee_id from salaries
WHERE employee_id NOT IN (SELECT employee_id from employees)
ORDER BY employee_id ASC;