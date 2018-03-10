function start(name) {
  if (window.WebSocket) {
	  //alert('ws://' + window.location.host + '/ambuj/q17/' + name);
    socket = new WebSocket('ws://' + window.location.host + '/ambuj/chat/' + name);
	
  } else {
    show('Error: Your browser does not support WebSocket.');
    return;
  }
  socket.onopen = function () {
	//alert('a');
    show('WebSocket connection opened.');
    ele = document.getElementById('chat');
    ele.onkeydown = function(event) {
      if (event.keyCode == 13) {
        socket.send(ele.value);
        ele.value = ''
      }
    };
  };

  socket.onclose = function () {
    show('WebSocket closed.');
  };

  socket.onmessage = function (message) {
    show(message.data);
  };
}

function show(message) {
  var output = document.getElementById('output');
  output.innerHTML = output.innerHTML+'<br>'+message;
}