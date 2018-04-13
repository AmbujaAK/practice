create database q30;
use que30;

create table sem1 (rollNo int not null AUTO_INCREMENT, name varchar(20), marks1 int, marks2 int, primary key (rollNo));
create table sem2 (rollNo int not null AUTO_INCREMENT, name varchar(20), marks1 int, marks2 int, primary key (rollNo));

insert into sem1 values (1, "Manisha", 85, 80);
insert into sem1 values (2, "Rahul", 78, 79);
insert into sem1 values (3, "Deepa", 83, 90);
insert into sem1 values (4, "Ritwick", 68, 69);

insert into sem2 values (1, "Manisha", 95, 90);
insert into sem2 values (2, "Rahul", 88, 90);
insert into sem2 values (3, "Deepa", 82, 70);
insert into sem2 values (4, "Ritwick", 78, 89);
