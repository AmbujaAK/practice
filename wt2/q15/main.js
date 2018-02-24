function process() {
    if (window.Worker) {
        console.log('Worker working fine');
        const myworker = new window.Worker('worker.js');

        var v = document.getElementById('num').value;
        
        // send input value to worker
        function create(){
            for (i=0; i<= v; i++){
                myworker.postMessage(i);    
            }
        }

        // receive calculated value from worker
        document.getElementById('table').innerHTML = '';
        var count = 0;
        myworker.onmessage = function(e) {
            document.getElementById('result').innerHTML = e.data;
            a = document.getElementById('table');
            a.innerHTML += '<br>' + count++ +'!='+ e.data;
        }
        create();
    }
    else
        alert("Your browser doesn't support web worker!!");
};