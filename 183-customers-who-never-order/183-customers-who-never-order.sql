# Write your MySQL query statement below
# select name
# from Customers
# left join Orders
# on Customers.id = Orders.id
# where CustomerId is null;

SELECT Name AS Customers
FROM Customers
LEFT JOIN Orders
ON Customers.Id = Orders.CustomerId
WHERE CustomerId IS NULL;