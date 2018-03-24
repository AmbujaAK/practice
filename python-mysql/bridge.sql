DROP Database IF EXISTS `bridge`;

create Database bridge;
	use bridge;

DROP TABLE IF EXISTS `accounts`;
/*
CREATE TABLE `accounts` (
	`sno` int(5) NOT NULL AUTO_INCREMENT,
	`username` varchar(10) NOT NULL,
	`email` varchar(30) NOT NULL,
	`password` varchar(15) NOT NULL,
	PRIMARY KEY (`username`,`email`,`password`)
	)
ENGINE = InnoDB DEFAULT CHARSET = latin1;
*/

CREATE TABLE `accounts` (
`id` int( 11 ) NOT NULL AUTO_INCREMENT,
`username` varchar( 30 ) NOT NULL ,
`email` varchar( 50 ) NOT NULL ,
`password` varchar( 128 ) NOT NULL ,
PRIMARY KEY ( `id` ) ,
UNIQUE KEY `username` ( `username` )
) ENGINE = InnoDB DEFAULT CHARSET = utf8;




LOCK TABLES `accounts` WRITE;

INSERT INTO `accounts` VALUES (1,'AmbujaAK','itsambuja@gmail.com','12345678');

UNLOCK TABLES;
