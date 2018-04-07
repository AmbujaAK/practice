<%@page import="java.sql.*"%>
<!DOCTYPE html>
<html>
  <head>
    <title>Ambuja Page</title>
      <link rel="stylesheet" type="text/css" href="style.css"></link>
      <link rel="stylesheet" href="https://www.w3schools.com/w3css/4/w3.css">
      <script src="main.js"></script>
  </head>
  <body>
    <h1>Hello , Ambuja !!</h1>
    <hr>
    <div>
      <b>State :</b>
      <select id="state" name="state" onchange="show_district(this.value)">
        <option value="0">---Select any state---</option>

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

          String sql = "Select * from state";
          rs = stmt.executeQuery(sql);

          while(rs.next()){
          %>
          <option value = "<%= rs.getString("state_id") %>"><%= rs.getString("state_name")%></option>
          <%
          }
          %>
      </select> &nbsp &nbsp

      <b>District :</b>
      <select id='district' name='district' onchange='show_info(this.value)'>
        <option value='0'>---Select any District---</option>
      </select>
    </div>
    <p id='content'></p>
  </body>
</html>
