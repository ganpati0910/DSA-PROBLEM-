# Write your MySQL query statement below

select u.user_id as buyer_Id,u.join_date, ifnull(count(order_date),0) as orders_in_2019
from users as u 
 left join 
orders as o 
on u.user_id=o.buyer_id
and year(order_date)='2019'
group by u.user_id
