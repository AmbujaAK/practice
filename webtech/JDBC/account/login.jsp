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
    String userdbPsw;
    %>
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

    String sql = "select * from accounts where email=? and password=?";

    String email = request.getParameter("email");
    String password = request.getParameter("password");

    if((!(email.equals(null) || email.equals("")) &&
    !(password.equals(null) || password.equals("")))) {
      try{
        Class.forName(driver);
        con = DriverManager.getConnection(connectionUrl + database, id, pwd);
        ps = con.prepareStatement(sql);
        ps.setString(1, email);
        ps.setString(2, password);
        rs = ps.executeQuery();
        if(rs.next()) {
          userdbName = rs.getString("email");
          userdbPsw = rs.getString("password");

          if(email.equals(userdbName) && password.equals(userdbPsw)) {
            session.setAttribute("name",userdbName);
            response.sendRedirect("welcome.jsp");
          }
        }
        else{
          response.sendRedirect("error.jsp");
        }
          rs.close();
          ps.close();
        } catch(SQLException sqe) {
          out.println(sqe);
        }
      }
      else {
        %>
        <center><p style="color:red">Error In Login</p></center>
        <%
        getServletContext().getRequestDispatcher("/index.jsp").include(request, response);
      }
      %>
    <!--
    <h1>Hello , Ambuja !!</h1>
    <hr>
    <h2>Login </h2>
    <div class="card">
      <form>
        Email ID :
        <input type="email" id="email" placeholder="Enter email ID"/><br><br>
        Password :
        <input type="password" id="password" placeholder="Enter password"/><br><br>
      </form>
      <form>
        <input type="button" id="button" value="Login"/>
      </form>
    </div>
  -->
  </body>
</html>
