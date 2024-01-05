/* Write your PL/SQL query statement below */
select w1.id from weather w1 cross join weather w2
where w1.temperature>w2.temperature and w1.recorddate-w2.recorddate=1;