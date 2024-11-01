# Write your MySQL query statement below
select distinct  num as consecutiveNums from
(select num,
lead(num,1) over(order by id) as num2,
lead(num,2) over(order by id) as num3
from logs) as logs_table
where num=num2 and num=num3
