# Write your MySQL query statement below
select t.person_name from 
(
    select  person_name,sum(weight)   
    over(order by turn) as w
    from queue
) as t
where w<=1000
order by w desc limit 1

   

