<%@page import="java.sql.*"%>
<!DOCTYPE html>
<html lang="en" dir="ltr">
  <head>
    <meta charset="utf-8">
    <title>User name</title>
  </head>
  <body>
    <h1>Get user name from database.</h1>
    <%
      String driver = "com.mysql.jdbc.Driver";
      String connectionUrl = "jdbc:mysql://localhost:3306/";
      String database = "wt2";
      String id = "root";
      String pwd = "";

      Connection con = null;
      Statement stmt = null;
      ResultSet rs = null;

      try {
        Class.forName(driver);
        con = DriverManager.getConnection(connectionUrl + database ,id,pwd);
        String sql = "select info from district_info where info_id='2'";
        rs = stmt.executeQuery(sql);
      %>
        <p><%=rs.getString("info_id")%></p>
      <%
        con.close();
      } catch (Exception e) {
        e.printStackTrace();
      }
    %>
  </body>
</html>
