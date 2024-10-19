# Write your MySQL query statement below

  with cte as (select
 e2.name as department,
 e1.name as employee,
 e1.salary as salary,
    DENSE_RANK() over(partition by e2.name order by e1.salary desc) as UNIrank
 from  employee as e1 
 join 
 department as e2 
 on e1.departmentid=e2.id)

 select
  department ,
  employee,
  salary
  from 
 cte 
 where 
 UNIrank<4
 
