SELECT IFNULL(
(SELECT distinct Salary
FROM Employee
ORDER BY Salary desc limit 1,1)
, null) as SecondHighestSalary ;