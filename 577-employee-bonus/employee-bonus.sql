# Write your MySQL query statement bel
select e.name,b.bonus
from employee as e 
left join 
bonus as b 
on e.empid=b.empid
where b.bonus<1000 or b.bonus is null