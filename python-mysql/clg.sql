DROP Database IF EXISTS `clg`;

create Database clg;
	use clg;

DROP TABLE IF EXISTS `student`;

CREATE TABLE `student` (
	`roll` int(11) NOT NULL AUTO_INCREMENT,
	`name` varchar(30) NOT NULL,
	PRIMARY KEY (`roll`)
	)	
ENGINE = InnoDB DEFAULT CHARSET = latin1;


LOCK TABLES `student` WRITE;

INSERT INTO `student` VALUES (1,'Ambuj Kumar');

UNLOCK TABLES;
