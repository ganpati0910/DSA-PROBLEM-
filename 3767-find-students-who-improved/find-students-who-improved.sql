# Write your MySQL query statement below
with cte as (select student_id,subject,score,row_number() over(partition by student_id,subject order by exam_date asc) as first,
row_number() over(partition by student_id,subject order by exam_date desc) as latest
from scores 
)

select student_id,subject,max(case when first=1 then score  end) as first_score,
max(case when latest=1 then score  end) as latest_score
from cte 
group by student_id,subject
having  max(CASE WHEN first = 1 THEN score END) < MAX(CASE WHEN latest = 1 THEN score END);
