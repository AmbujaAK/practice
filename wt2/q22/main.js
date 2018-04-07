var xmlhttp;
function show_district(str){

  if (typeof XMLHttpRequest !== "undefined") {
    xmlhttp = new XMLHttpRequest();
  } else if (window.ActiveXObject) {
    xmlhttp = new XMLHttpRequest("Microsoft.XMLHTTP");
  }
  if (xmlhttp === null) {
    alert("Browser does not support XMLHttpRequest");
    return false;
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
  if (typeof XMLHttpRequest !== "undefined") {
    xmlhttp = new XMLHttpRequest();
  } else if (window.ActiveXObject) {
    xmlhttp = new XMLHttpRequest("Microsoft.XMLHTTP");
  }
  if (xmlhttp === null) {
    alert("Browser does not support XMLHttpRequest");
    return false;
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
