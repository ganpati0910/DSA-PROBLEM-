# Write your MySQL query statement below
select p.product_id,
case when round(sum(p.price*u.units)/sum(u.units),2)  is null then 0 
  else round(sum(p.price*u.units)/sum(u.units),2) end as average_price
from prices as p
left join 
unitssold  as u
on p.product_id =u.product_id
and u.purchase_date  between p.start_date and p.end_date 
group by p.product_id;
