<%@page import="java.sql.*"%>
<%
	Connection con = null;
	Statement stmt1 = null;
	Statement stmt2 = null;
	Statement stmt3 = null;
	ResultSet rs1 = null;
	ResultSet rs2 = null;
	ResultSet rs3 = null;

	new com.mysql.jdbc.Driver();
	con=DriverManager.getConnection("jdbc:mysql://localhost/wt2","root","");
	stmt1 = con.createStatement();
	stmt2 = con.createStatement();
	stmt3 = con.createStatement();
	String usr = request.getParameter("username");
	String query1 = "select * from q31 where login ='"+usr+"'";
	rs1 = stmt1.executeQuery(query1);
	String mail = request.getParameter("email");
	String query2 = "select * from q31 where email ='"+mail+"'";
	rs2 = stmt2.executeQuery(query2);
	String phone = request.getParameter("phone");
	String query3 = "select * from q31 where mobile ='"+phone+"'";
	rs3 = stmt3.executeQuery(query3);
	if(rs1.next()||rs2.next()||rs3.next()) {
			out.println(0);
	}
	else
	out.println(1);
%>
