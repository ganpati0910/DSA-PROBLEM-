# Write your MySQL query statement below
with cte as 
(
    select customer_id,max(transaction_date) as t1,min(transaction_date) as t2,
    sum(case when transaction_type ='purchase' or transaction_type ='refund' then 1 else 0 end) as total_transaction,
    sum(case when transaction_type='purchase' then 1 else 0 end ) as purchase_transaction,
    sum(case when transaction_type='refund'  then 1 else 0 end ) as refund_transaction
    from customer_transactions
    group by customer_id
    having
     DATEDIFF(t1, t2) >= 30
    and 
    purchase_transaction>=3 
    and (refund_transaction/total_transaction)*100 <20 
)

select customer_id from cte 
order by customer_id