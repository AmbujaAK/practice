$(document).ready(function(){
	// checking support for indexedDB 
	if (!window.indexedDB) {
    window.alert("Your browser doesn't support a stable version of IndexedDB. Such and such feature will not be available.");
	}
	// open database
	var request = indexedDB.open('customerDB',1);
	var db;
	request.onsuccess = function(e) {
		console.log('success : Database opend...');
		db = e.target.result;
		showCustomers();
	}
	
	request.onerror = function(e) {
		console.log('Error : Not opening database...');
	}
	
	request.onupgradeneeded = function(e) {
		var db = e.target.result;
		
		if(!db.objectStoreNames.contains('customers')){
			var os = db.createObjectStore('customers', {keyPath: "id" , autoIncrement: true});
			
			// Create index for name
			os.createIndex('name','name',{unique:false});
		}
	}
});

// add customer
function addCustomer(){
	var name = $('#name').val;
	var email = $('#email').val;
	var contact = $('#contact').val;
	
	var transaction = db.transaction(["customers"],"readwrite");
	
	// Ask for ObjectStore
	var store = transaction.objectStore("customers");
	
	// Define customers
	var customer = {
		name : name,
		email : email,
		contact : contact
	};
	
	// Perform the add 
	var request = store.add(customer);
	
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

// Display customers
function showCustomers(e) {
	var transaction = db.transaction(["customers"],"readOnly");
	
	// Ask for ObjectStore
	var store = transaction.objectStore("customers");
	var index = store.index('name');
	
	var output = '';
	index.openCursor().onsuccess = function(e) {
		var cursor = e.target.result;
		if(cursor){
			output += '<tr>';
			output += '<td>' + cursor.value.id + '</td>';
			output += '<td>' + cursor.value.name + '</td>';
			output += '<td>' + cursor.value.email + '</td>';
			output += '<td>' + cursor.value.contact + '</td>';
			output += '</tr>';
			cursor.continue();
		}
		$('customers').html(output);
	}
}