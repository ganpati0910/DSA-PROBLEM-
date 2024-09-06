# Write your MySQL query statement below

 select e1.name from 
 employee as e1 
 inner join 
 employee as e2 
 on e1.id=e2.managerid
 group by e2.managerid
 having count(e2.id)>=5;