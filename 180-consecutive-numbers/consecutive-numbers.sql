# Write your MySQL query statement below
with cte as (select 
num,lead(num,1) over(order by id) as num2,
lead(num,2) over(order by id) as num3
from logs)

select distinct num as consecutivenums 
from cte 
where num=num2 and num2=num3;
