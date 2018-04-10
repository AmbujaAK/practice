# DOCUMENTATION for installing Apache tomcat

- Download apache tomcat (.zip) and install(unzip) it.
- keep the unziped folder wherever you want (say *F:\apache*)
- How to start server :-
	1. Using Command Prompt
		- Go to bin folder
		- type **startup**
	2. Clicking on this file *F:\apache\bin\startup*
- How to stop server :-
	1. Using Command Prompt
		- Go to bin folder
		- type **shutdown**
	2. Clicking on this file *F:\apache\bin\shutdown*
- How to Change port no :-
	1. Go to conf folder (i.e. *F:\apache\conf*)
	2. you will see **server** file , edit this file in any editor (say **notepad++**)
	3. In *connector* tag , change the port , you want.
	4. Restart the web server.
	5. open the *index.html* file with new port.
