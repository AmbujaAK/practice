function check() {
var login = document.getElementById("login").value;
var psw = document.getElementById("psw").value;

var re_login = /^[a-zA-Z0-9_]{1,10}$/;
var re_psw = /^[0-9+A-Z+a-z]{6,10}$/;

var c_login = re_login.test(login);
var c_psw = re_psw.test(psw);

console.log(re_login.test(login));
console.log(re_psw.test(psw));

if (login =='' || psw == '') {
  document.getElementById('error').style.color = 'red';
  document.getElementById('error').innerHTML = 'please enter your login id and password';
}else if (c_login == false || c_psw == false) {
  document.getElementById('error').style.color = 'red';
  document.getElementById('error').innerHTML = 'login/password incorrect';
} else {
  document.getElementById('error').style.color = 'green';
  document.getElementById('error').innerHTML = 'sucessfully logged in';
}
}
