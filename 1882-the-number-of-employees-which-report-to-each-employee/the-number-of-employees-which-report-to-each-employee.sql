# Write your MySQL query statement below
select e1.employee_id,e1.name,count(*) as reports_count,round(avg(e2.age)) as average_age
from employees as e1 
inner join 
employees as e2 
on e1.employee_id=e2.reports_to
group by e2.reports_to
order by e1.employee_id;

