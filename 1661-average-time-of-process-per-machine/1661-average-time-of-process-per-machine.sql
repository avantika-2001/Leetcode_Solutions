# Write your MySQL query statement below
select machine_id, ROUND(SUM(CASE WHEN activity_type='start' THEN timestamp*-1 ELSE timestamp END)*1.0/(SELECT COUNT(DISTINCT process_id)),3) as processing_time
FROM Activity 
Group by machine_id;