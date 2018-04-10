function login(){
  //alert('sucess');
  var header = document.getElementById('reg');
  var register = document.getElementById('register');
  var ask = document.getElementById('ask');
  var signup = document.getElementById('signup');
  var login = document.getElementById('login');
  header.innerHTML = 'login';
  signup.value = 'login';
  ask.style.display = 'none';
  login.style.display = 'none';
}
