# Write your MySQL query statement below
Select p.firstName,p.lastName,a.city,a.state from Person  p Left JOIN Address  a ON p.personId = a.personId;