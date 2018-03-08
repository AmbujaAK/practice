function start(name) {
  if (window.WebSocket) {
    socket = new WebSocket('ws://' + window.location.host + '/q17/' + name);
  } else {
    show('Error: Your browser does not support WebSocket.');
    return;
  }
  socket.onopen = function () {
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
