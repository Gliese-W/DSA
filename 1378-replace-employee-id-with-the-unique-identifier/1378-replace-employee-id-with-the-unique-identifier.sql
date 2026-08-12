# Write your MySQL query statement below
SELECT eu.unique_id, e1.name 
FROM Employees AS e1
LEFT JOIN EmployeeUNI AS eu ON e1.id = eu.id