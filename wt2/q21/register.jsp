<%@page import="java.sql.*"%>
<!DOCTYPE html>
<html>
  <head>
    <title>Ambuja Page</title>
      <link rel="stylesheet" type="text/css" href="style.css"></link>
      <link rel="stylesheet" href="https://www.w3schools.com/w3css/4/w3.css">
  </head>
  <body>
    <%
    Connection con = null;
    Statement stmt = null;
    PreparedStatement ps = null;
    ResultSet rs = null;

    String driver = "com.mysql.jdbc.Driver";
    String connectionUrl = "jdbc:mysql://localhost:3306/";
    String database = "wt2";
    String id = "root";
    String pwd = "";

    String username = request.getParameter("username");
    String email = request.getParameter("email");
    String password = request.getParameter("password");

    try {
      Class.forName(driver);
      con = DriverManager.getConnection(connectionUrl + database, id, pwd);
      stmt = con.createStatement();

      String sql = "INSERT INTO accounts VALUES('" + username + "','"+ email +"','" + password +"')";

      int i = stmt.executeUpdate(sql);
      out.println("You are registered");

    } catch(SQLException sqe) {
      out.println("username or email is already registered");
      }
    }
    %>
  </body>
</html>
