var prev = document.getElementById('prev');
var next = document.getElementById('next');

function dec(){
  var val = parseInt(document.getElementById('num').value);
  val = isNaN(val) ? 0 : val;
  val--;
  document.getElementById('num').value = val;
}
function inc(){
  var val = parseInt(document.getElementById('num').value);
  val = isNaN(val) ? 0 : val;
  val++;
  document.getElementById('num').value = val;
}
