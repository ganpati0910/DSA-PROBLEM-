# Write your MySQL query statement below
Select customer_id,count(customer_id) as count_no_trans
from visits as v
left join transactions as tc
on v.visit_id=tc.visit_id
where tc.transaction_id is null
group by v.customer_id

