window.onload = function onload() {
    // checking support for indexedDB 
	if (!window.indexedDB) {
        alert("Your browser doesn't support a stable version of IndexedDB. Such and such feature will not be available.");
    }
    // open database
	var request = indexedDB.open('ComputerDB',1);
	var db;
	request.onsuccess = function(e) {
		console.log('success : Database opend...');
		db = e.target.result;
		//showCustomers();
    }
    
    request.onerror = function(e) {
		console.log('Error : Not opening database...');
	}
	
	request.onupgradeneeded = function(e) {
		var db = e.target.result;
		
		if(!db.objectStoreNames.contains('hdds')) {
			var os = db.createObjectStore('hdds', {keyPath: 'id', autoIncrement: true});
			
			// Create index for name
			os.createIndex('name','name',{unique:false});
		}
	}
}

// add customer
function add() {
	var name = $('#name').val;
	var manufacturer = $('#manufacturer').val;
	var price = $('#price').val;
	
	var db;
	var transaction = db.transaction(["hdds"],"readwrite");
	
	// Ask for ObjectStore , we are going to work with.
	var store = transaction.objectStore("hdds");
	
	// Define customers
	var hdd = {
		name : name,
		manufacturer : manufacturer,
		price : price
	};
	
	// Perform the add 
	var request = store.add(hdd);
	
	// success
	request.onsuccess = function(e) {
		window.location.href = "index.html";
	}
	
	// error
	request.onerror = function(e) {
		alert('Sorry ! customers are not added');
		console.log('error', e.target.error.name)
	}
}