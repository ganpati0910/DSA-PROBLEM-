# Write your MySQL query statement below
select p.product_name, sum(o.unit) as unit
from 
products as p
inner join 
orders as o 
on p.product_id=o.product_id
where  month(o.order_date)=2 and 
       year(o.order_date)=2020
group by o.product_id
having sum(o.unit)>=100