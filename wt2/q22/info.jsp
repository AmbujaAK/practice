<%@page import="java.sql.*"%>
<%@page import="javax.servlet.http.*,javax.servlet.*"%>
<!DOCTYPE html>
<html lang="en" dir="ltr">
  <head>
    <meta charset="utf-8">
  </head>
  <body>
<%
  String districtCount = request.getParameter("count");
  String buffer = "";
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
    //String sql = "SELECT info FROM district_info WHERE info_id='1'";
    //String sql = "SELECT * FROM district_info WHERE info_id='" + districtCount + "'";
    String sql = "SELECT * FROM district_info";
    rs = stmt.executeQuery(sql);

    int c = 1;
    while(rs.next()){
      //String disID = request.getParameter("count");
      if (districtCount.equals(c)) {
        buffer = rs.getString("info");
        break;
      } else{
        c++;
      }
    }
     response.getWriter().println(buffer);

  } catch (Exception e) {
    e.printStackTrace();
  }
%>
</body>
</html>
