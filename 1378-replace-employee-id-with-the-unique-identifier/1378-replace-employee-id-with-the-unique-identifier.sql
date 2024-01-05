/* Write your PL/SQL query statement below */
select unique_id, name
from employees e LEFT JOIN employeeUNI eu on e.id=eu.id;
