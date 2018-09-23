function getInfo(emp) {
  try {
    xmlHttp = new XMLHttpRequest();
  }catch(e1) {
try {
      xmlHttp = new ActiveXObject("Microsoft.XMLHTTP");
    }catch(e2) {
      try {
        xmlHttp = new ActiveXObject("Msxml2.XMLHTTP");
      }catch(e3) {
        alert('AJAX not supported');
        return false;
      }
    }
  }
  xmlHttp.onreadystatechange = processResponse;
  xmlHttp.open("GET",'getEmp.jsp?name='+emp, true);
  xmlHttp.send(null);
}
function processResponse() {
  if(xmlHttp.readyState == 4 && xmlHttp.status == 200) {
    try {
      msg = '<table border="0">';
      obj = JSON.parse(xmlHttp.responseText);
      for(property in obj) {
        msg += '<tr><td>'+property+'</td><td><input type="text" id="'+property+'" value="'+obj[property]+'" onchange="obj[this.id]=this.value"></td></tr>';
      }
      msg += '</table><button onClick="update()">Update</button>';
      document.getElementById('panel').innerHTML = msg;
      document.getElementById("name").disabled = true;
      //alert(msg);
    }catch(e) {alert(e);}
  }
}
function update() {
  xmlHttp.onreadystatechange = showMessage;
  url = 'updateEmp.jsp?JSONStr='+JSON.stringify(obj);
  xmlHttp.open("GET", url, true);
  xmlHttp.send(null);
}
function showMessage() {
  if(xmlHttp.readyState == 4 && xmlHttp.status == 200)
alert(xmlHttp.responseText);
}
getInfo('John');
