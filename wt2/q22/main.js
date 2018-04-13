var xmlhttp;
function show_district(str){
  try {
    xmlHttp = new XMLHttpRequest();
  }catch(e1) {
    try {
      xmlHttp = new ActiveXObject("Microsoft.XMLHTTP");
    }catch(e2) {
      try {
        xmlHttp = new ActiveXObject("Msxml2.XMLHTTP");
      }catch(e3) {
        alert("Your browser does not support AJAX");
      }
    }
  }

  var url = "district.jsp";
  url += "?count=" + str;
  console.log("state count :" + str);
  xmlhttp.onreadystatechange = change_district;
  xmlhttp.open("GET",url,true);
  xmlhttp.send(null);
}

function change_district() {
  if (xmlhttp.readyState === 4 || xmlhttp.readyState === "complete") {
    document.getElementById('district').innerHTML = xmlhttp.responseText;
  }
}

function show_info(str) {
  try {
    xmlHttp = new XMLHttpRequest();
  }catch(e1) {
    try {
      xmlHttp = new ActiveXObject("Microsoft.XMLHTTP");
    }catch(e2) {
      try {
        xmlHttp = new ActiveXObject("Msxml2.XMLHTTP");
      }catch(e3) {
        alert("Your browser does not support AJAX");
      }
    }
  }

  var url = "info.jsp";
  url += "?count=" + str;
  console.log("District Count :" + str);
  xmlhttp.onreadystatechange = change_info;
  xmlhttp.open("GET",url,true);
  xmlhttp.send(null);
}

function change_info() {
  if (xmlhttp.readState === 4 || xmlhttp.readyState === "complete") {
    document.getElementById('content').innerHTML = xmlhttp.responseText;
  }
}
