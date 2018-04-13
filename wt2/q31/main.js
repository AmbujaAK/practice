function check2(oldPassword,newPassword){
 var ele = document.getElementById('error');
 var buttonEle = document.getElementById('loginButton');
 if(oldPassword==newPassword) {
   ele.innerHTML = "<font color=green>Proceed!</font>";
   buttonEle.disabled = false;
   check(account.username.value,account.email.value,account.phone.value)
 } else {
    ele.innerHTML = "<font color=red>Confirm your password </font>";
    buttonEle.disabled = true;
  }
}

function ajaxx(username,email,phone,callback){
  url = "account.jsp?username="+username+"&email="+email+"&phone="+phone;
  console.log(url);
  try {
    xmlHttp = new XMLHttpRequest();
  }catch(e){ return false; }

  xmlHttp.open("GET",url,true);
  xmlHttp.send(null);
  xmlHttp.onreadystatechange = function(){
    if(xmlHttp.readyState == 4){
      callback(xmlHttp.responseText);
    }
  }
}

  function check(username,email,phone){
    if(username!=""){
      ajaxx(username,email,phone,function(val){
        console.log(parseInt(val));
        var ele = document.getElementById('error');
        var buttonEle = document.getElementById('loginButton');
        if(val==0) {
          ele.innerHTML = "<font color=red>Sorry! Username or email or phone no already registered!</font>";
          buttonEle.disabled = true;
        } else {
            ele.innerHTML = "<font color=green>Proceed!</font>";
            buttonEle.disabled = false;
        }
      });
    }
  }
