# Write your MySQL query statement below
select round(SUM(tiv_2016),2) as tiv_2016  from (SELECT * ,
COUNT(*) OVER(PARTITION BY LAT, LON) AS location,
count(*) over(partition by tiv_2015) as year
FROM Insurance) as t
where location = 1
and year > 1