function display(){
  var xmlhttp = new XMLHttpRequest();

  xmlhttp.onreadystatechange = function(){

    if (xmlhttp.readystate == 4 && xmlhttp.status == 200) {
      //console.log('hi');

      var output = document.getElementById('output');
      output.innerHTML = xmlhttp.responseText;
      //console.log('hi');
    }
  }

  xmlhttp.open('GET','data.php',true);
  xmlhttp.send();
}
