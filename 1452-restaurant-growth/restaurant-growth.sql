# Write your MySQL query statement below
-- select visited_on,
-- sum(amount) over( rows between 6 preceding and current row) as amount,
-- round(sum(amount) over( rows between 6 preceding and current row)/7,2) as average_amount
-- from customer
-- group by visited_on
-- limit 6,999;

select distinct visited_on,
sum(amount) over(order by visited_on range between interval 6 day preceding and current row) as amount,
round(sum(amount) over(order by visited_on range between interval 6 day preceding and current row) / 7, 2) as average_amount
from customer
limit 100000
offset 6 