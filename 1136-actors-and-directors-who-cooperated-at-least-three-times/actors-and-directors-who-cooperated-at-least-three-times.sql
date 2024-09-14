# Write your MySQL query statement below
-- select actor_id,director_id
-- from ActorDirector
-- group by actor_id,director_id
-- having count(timestamp)>=3

# Write your MySQL query statement below
SELECT actor_id, director_id FROM ActorDirector
 GROUP BY actor_id, director_id HAVING COUNT(actor_id) > 2;