<%@page import="java.sql.*"%>
<!DOCTYPE html>
<html lang="en" dir="ltr">
  <head>
    <meta charset="utf-8">
  </head>
  <body>
<%
  String stateCount = request.getParameter("count");
  String buffer = "<select id='district' name='district' onchange='show_info(this.value)'>";
  buffer += "<option value='-1'>---Select any District---</option>";

  Connection con = null;
  Statement stmt = null;
  ResultSet rs = null;

  String driver = "com.mysql.jdbc.Driver";
  String connectionUrl = "jdbc:mysql://localhost:3306/";
  String database = "wt2";
  String id = "root";
  String pwd = "";

  try {
    Class.forName(driver);
    con = DriverManager.getConnection(connectionUrl + database, id, pwd);
    stmt = con.createStatement();

    String sql = "Select * from district where state_id='" + stateCount + "'";

    rs = stmt.executeQuery(sql);

    while(rs.next()){
      buffer += "<option value='" + rs.getString("district_id") + "'>" + rs.getString("district") + "</option>";
    }

    buffer += "</select>";

    response.getWriter().println(buffer);

  } catch (Exception e) {
    e.printStackTrace();
  }
%>

</body>
</html>
