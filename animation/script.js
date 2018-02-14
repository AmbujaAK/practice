
function changeR() {
	rx = parseInt(document.getElementById("e2").getAttribute("ry"));
	ry = parseInt(document.getElementById("e2").getAttribute("rx"));
	document.getElementById("e2").setAttribute("rx",(rx+5)+"");
	document.getElementById("e2").setAttribute("ry",(ry+5)+"");
}
/*
function changeR() {
	//var circle = document.getElementById("e2");
	rx = parseInt(document.getElementById("e2").getAttribute("ry"));
	ry = parseInt(document.getElementById("e2").getAttribute("rx"));
	while (rx < 110 || ry < 110){
		document.getElementById("e2").setAttribute("rx",(rx+5)+"");
		document.getElementById("e2").setAttribute("ry",(ry+5)+"");
	}
}
*/