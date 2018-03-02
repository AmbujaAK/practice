var pageCounter = 1;
var subject = document.getElementById("subject");
var btn = document.getElementById("btn");

btn.addEventListener("click", function() {
  var ourRequest = new XMLHttpRequest();
  ourRequest.open('GET','https://learnwebcode.github.io/json-example/animals-' + pageCounter + '.json');
  ourRequest.onload = function () {
    var ourData = JSON.parse(ourRequest.responseText);
    renderHTML(ourData);
  };
  ourRequest.send();
  pageCounter++;
  if (pageCounter == 4) {
    btn.style.display = (btn.style.display == "none") ? "block" : "none";
  }
});

function renderHTML(data) {
  var htmlString = "";
  for (var i = 0; i < data.length; i++) {
    htmlString = "<p>" + data[i] + "</p>";
  }
  subject.insertAdjacentHTML('beforeend', htmlString);
}
