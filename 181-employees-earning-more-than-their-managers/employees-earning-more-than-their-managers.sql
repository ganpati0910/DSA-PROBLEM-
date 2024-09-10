# Write your MySQL query statement below

select e1.name as employee from 
employee  as e1 
inner join 
employee as e2 
on e2.id=e1.managerid
where e1.salary>e2.salary

