<%@page import="java.sql.*"%>
<%
	String sem = request.getParameter("sem");
	String roll = request.getParameter("roll");
	Integer sub = Integer.parseInt(request.getParameter("sub"));

	try {
		String driver = "com.mysql.jdbc.Driver";
		String connectionUrl = "jdbc:mysql://localhost:3306/";
		String database = "q30";
		String id = "root";
		String pwd = "";

		Class.forName(driver);
		Connection conn = DriverManager.getConnection(connectionUrl + database, id, pwd);
		Statement stmt = conn.createStatement();
		ResultSet rs = stmt.executeQuery("select * from sem1 "+sem+" where rollno = '" + roll + "'");

		while(rs.next()) {
			out.println("<b>Name :</b> " + rs.getString("name") + "<br>");
			out.println("<b>Marks : </b>");
			if(sub == 1)
				out.println(rs.getString("marks1"));
			else if(sub==2)
				out.println(rs.getString("marks2"));
		}
    stmt.close();
    conn.close();
  }catch(Exception e) {out.println(e);}

%>
