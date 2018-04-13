<%@page import="java.sql.*"%>
<%
	new com.mysql.jdbc.Driver();
	Connection con=DriverManager.getConnection("jdbc:mysql://localhost/wt2","root","");
	Statement stmt = con.createStatement();
	String usr = request.getParameter("username");
	String name = request.getParameter("fullname");
	String email = request.getParameter("email");
	String phone = request.getParameter("phone");
	String pswd1 = request.getParameter("password");
	String pswd2 = request.getParameter("confirm_password");
	String query = "insert into q31(username,name,email,mobile,password1,password2) values('"+usr+"','"+name+"','"+email+"','"+phone+"','"+pswd1+"','"+pswd2+"')";
	int i = stmt.executeUpdate(query);

	out.println("<center><b>" + "You are registered" + "</b></center>");
%>
