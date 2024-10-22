# Write your MySQL query statement below

select sp.name from salesperson  as sp where sp.name not in (select sp.name
from salesperson as sp 
join 
orders as o 
on sp.sales_id=o.sales_id
join 
company as c 
on c.com_id=o.com_id
where c.name="red")
