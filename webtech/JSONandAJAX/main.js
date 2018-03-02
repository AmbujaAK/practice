var pageCounter = 1;
var subject = document.getElementById("subject");
var btn = document.getElementById("btn");

btn.addEventListener("click", function() {
  var ourRequest = new XMLHttpRequest();
  ourRequest.open('GET','https://raw.githubusercontent.com/AmbujaAK/practice/master/webtech/JSONandAJAX/json/friendlist-' + pageCounter + '.json');
  ourRequest.onload = function () {
    var ourData = JSON.parse(ourRequest.responseText);
    renderHTML(ourData);
  };
  ourRequest.send();
  pageCounter++;
  if (pageCounter == 3) {
    btn.style.display = (btn.style.display == "none") ? "block" : "none";
  }
});

function renderHTML(data) {
  var htmlString = "";
  for (var i = 0; i < data.length; i++) {
    htmlString = "<p> Name : " + data[i].name + "</p>";
    subject.insertAdjacentHTML('beforeend', htmlString);
  }
}
