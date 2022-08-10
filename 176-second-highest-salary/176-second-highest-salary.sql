SELECT MAX(salary) As SecondHighestSalary  
from Employee 
where salary < (select max(salary) from Employee)