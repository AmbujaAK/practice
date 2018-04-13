use wt2;

create table q29 (id int not null AUTO_INCREMENT, item varchar(20), price int, manufacturer varchar(20), model varchar(20), primary key (id));
desc components;

insert into q29 values (1, "HDD", 1600, "Samsung", "ATA");
insert into q29 values (2, "Monitor", 7500, "LG", "LCD");
insert into q29 values (3, "HDD", 2500, "LG", "ATA");
insert into q29 values (4, "Monitor", 3000, "LG", "LCD");
insert into q29 values (5, "Monitor", 3500, "Samsung", "ATA");
insert into q29 values (6, "HDD", 5000, "Samsung", "LCD");
