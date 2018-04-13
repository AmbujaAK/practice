<%@page import="java.sql.*"%>
<%@page import="java.io.*"%>
<%
	String old_password = request.getParameter("old_password");
	String new_password = request.getParameter("new_password");
	String conf_password = request.getParameter("conf_password");


	Connection con = null;
	Statement stmt = null;
	String pswd = "";
	int id = 0;

	try {
		Class.forName("com.mysql.jdbc.Driver");
		String url = "jdbc:mysql://localhost:3306/wt2";
		con = DriverManager.getConnection(url, "root", "");
		stmt = con.createStatement();
		ResultSet rs = stmt.executeQuery("select * from accounts where password = '"+ old_password + "'");
		if (rs.next()) {
			pswd = rs.getString("password");
		}
		if(new_password.equals(conf_password)) {
			if (pswd.equals(old_password)) {
				stmt = con.createStatement();
				int i = stmt.executeUpdate("update accounts set password ='"+ new_password + "' where password = '" + old_password +"'");
				out.println("<b style='color:green'>Password changed successfully</b>");
				stmt.close();
				con.close();
		} else {
			out.println("<b style='color:red'>Incorrect password</b>");
		}
	}
} catch (Exception e) {
out.println(e);
}
%>
