# Write your MySQL query statement below
  select department,employee,salary from 
  (select 
  d.name as department,e.name as employee,
  dense_rank() over(partition by d.name order by e.salary desc) 
   as rnk, e.salary as salary
   from 
 employee as e 
 inner join 
 department as d on
 e.departmentid=d.id)  as  s
  where rnk<=3


