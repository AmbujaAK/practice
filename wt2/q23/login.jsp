<!DOCTYPE html>
<html>
  <head>
    <title>Ambuja Page</title>
      <link rel="stylesheet" type="text/css" href="style.css"></link>
      <link rel="stylesheet" href="https://www.w3schools.com/w3css/4/w3.css"/>
  </head>
  <body>
    <div style="color:blue">
			<center >Ambuj Kumar</center>
			<center >74</center>
			<center >Web Technology</center><hr>
		</div>
    <%
      Connection con = null;
      Statement stmt = null;
      ResultSet rs = null;

      String driver = "com.mysql.jdbc.Driver";
      String connectionUrl = "jdbc:mysql://localhost:3306/";
      String database = "wt2";
      String id = "root";
      String pwd = "";

      Class.forName(driver);
      con = DriverManager.getConnection(connectionUrl + database, id, pwd);
      stmt = con.createStatement();

      String sql = "Select * from accounts";
      rs = stmt.executeQuery(sql);
      %>
    <h2 id='reg'>Login page</h2>
    <div class="card">
      <div id="login">
        <form method="post" action="#">
          User Name :
          <input type="text" name="username" placeholder="Enter username"/><br><br>
          <%
          String username = request.getParameter("username");
          String sql_username = "select username from accounts"; 
          %>
          Email ID :
          <input type="email" name="email" placeholder="Enter email ID"/><br><br>
          Password :
          <input type="password" name="password" placeholder="Enter password"/><br><br>

          <input id="login" type="submit" value="login"/>
        </form>
      </div><br>
      <a href="index.html" style="color:red">Go back</a>
    </div>
  </body>
</html>
