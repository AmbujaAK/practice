function process() {
    if (window.Worker) {
        console.log('Worker working fine');
        const myworker = new window.Worker('worker.js');

        var v = document.getElementById('num').value;

        myworker.postMessage(v);

        myworker.onmessage = function(e) {
            document.getElementById('result').innerHTML = e.data;
        }
    }
    else
        alert("Your browser doesn't support web worker!!");
};