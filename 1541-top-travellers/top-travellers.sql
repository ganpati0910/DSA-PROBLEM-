# Write your MySQL query statement below
select u.name,ifnull(sum(r.distance),0) as travelled_distance
from users as u 
 left join 
rides as r 
on u.id=r.user_Id
group by r.user_Id
order by travelled_distance desc,u.name asc
