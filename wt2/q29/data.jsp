<%@page import="java.sql.*"%>
<%
	String model = request.getParameter("model");
	String manufacturer = request.getParameter("manufacturer");

  try {
			String driver = "com.mysql.jdbc.Driver";
			String connectionUrl = "jdbc:mysql://localhost:3306/";
			String database = "wt2";
			String id = "root";
			String pwd = "";

			Class.forName(driver);
			Connection conn = DriverManager.getConnection(connectionUrl + database, id, pwd);
      Statement stmt = conn.createStatement();
			String sql = "select * from q29 where model = '" + model + "' and manufacturer = '" + manufacturer +"'";
			ResultSet rs = stmt.executeQuery(sql);
			int totalPrice = 0;
			while(rs.next()) {
				int p = Integer.parseInt(rs.getString("price"));
				totalPrice += p;
	}
	out.println("Total Price = " + totalPrice);
  stmt.close();
  conn.close();
  }catch(Exception e) {out.println(e);}
%>
