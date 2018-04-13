<%@page import="java.sql.*"%>
<%
	String username = request.getParameter("username");
	String password = request.getParameter("password");

	try {
			new com.mysql.jdbc.Driver();
      Connection conn = DriverManager.getConnection("jdbc:mysql://localhost:3306/wt2", "root", "");
      Statement stmt = conn.createStatement();
			String sql = "select * from accounts where username = '" + username + "'";
			ResultSet rs = stmt.executeQuery(sql);

	    String pswd;
	    while(rs.next()){
		      pswd = rs.getString("password");
		       if(pswd.equals(password))
			        out.println("<b style='color:green'>Login Successful</b>");
		        else
			         out.println("<b style='color:red'>Login error</b>");
	    }
      stmt.close();
      conn.close();
    }catch(Exception e) {out.println(e);}
%>
