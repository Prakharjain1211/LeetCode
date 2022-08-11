# Write your MySQL query statement below
SELECT DISTINCT num as ConsecutiveNums 
FROM (
    SELECT * ,
    CASE WHEN num = lead(num)over()
            and num = lead(num,2) over()
        then num
    end as Nums
    FROM Logs)x
where x.Nums is not null;
