# Write your MySQL query statement
--  select round(,2)
         
--       (select customer_id,min(order_date)
--       from delivery 
--       group by customer_id)



    Select 
round(sum(if(order_date=customer_pref_delivery_date,1,0))*100/count(*),2) 
as immediate_percentage
from delivery
where (customer_id, order_date) in 
(select customer_id, min(order_date)
from 
delivery group by customer_id);