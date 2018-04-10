<%@page import="java.sql.*"%>
<!DOCTYPE html>
<html>
  <head>
    <title>Ambuja Page</title>
      <link rel="stylesheet" type="text/css" href="style.css"></link>
      <link rel="stylesheet" href="https://www.w3schools.com/w3css/4/w3.css">
  </head>
  <body>
    <%!
    String userdbName;
    String userdbEml;
    %>
    <%
    Connection con = null;
    Statement stmt = null;
    PreparedStatement ps = null;
    ResultSet rs = null;
    String username = null;
    String email = null;
    String password = null;
    String sql = null;

    String driver = "com.mysql.jdbc.Driver";
    String connectionUrl = "jdbc:mysql://localhost:3306/";
    String database = "wt2";
    String id = "root";
    String pwd = "";

    sql = "select * from accounts where username=? and email=?";
    username = request.getParameter("username");
    email = request.getParameter("email");

    if((!(username.equals(null) || username.equals("")) &&
    !(email.equals(null) || email.equals("")))) {
      try {
        Class.forName(driver);
        con = DriverManager.getConnection(connectionUrl + database, id, pwd);
        ps = con.prepareStatement(sql);
        ps.setString(1, username);
        ps.setString(2, email);
        rs = ps.executeQuery();
        if(rs.next()) {
          userdbName = rs.getString("username");
          userdbEml = rs.getString("email");
          if(username.equals(userdbName) && email.equals(userdbEml)) {
            out.println("There is already an account by this email or username, Try different !");
          }
        }
        else {
          username = request.getParameter("username");
          email = request.getParameter("email");
          password = request.getParameter("password");

          sql = "INSERT INTO accounts VALUES('" + username + "','"+ email +"','" + password +"')";
         stmt.executeUpdate(sql);
        }
          rs.close();
          ps.close();
        } catch(SQLException sqe) {
          out.println(sqe);
        }
      }
      %>
  </body>
</html>
