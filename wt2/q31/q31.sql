CREATE TABLE q31 (
  username varchar(50) NOT NULL,
  name varchar(50) NOT NULL,
  email varchar(50) NOT NULL,
  mobile int(10) NOT NULL,
  password1 varchar(50) NOT NULL,
  password2 varchar(50) NOT NULL);

INSERT INTO q31 (
  username,
  name,
  email,
  mobile,
  password1,
  password2)
  VALUES(
    'test1',
    'test kumar',
    'test1@gmail.com',
    '1234567890',
    'test1',
    'test1');
