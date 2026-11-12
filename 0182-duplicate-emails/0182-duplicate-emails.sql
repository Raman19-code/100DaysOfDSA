# Write your MySQL query statement below
SELECT Email
from Person
GROUP BY email
Having count(*)>1;