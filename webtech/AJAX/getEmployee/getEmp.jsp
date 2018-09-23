<%@page import="java.sql.*"%>
<%
  Class.forName("com.mysql.jdbc.Driver");
  String url = "jdbc:mysql://127.0.0.1:3306/ajax";
  Connection conn = DriverManager.getConnection(url, "root", "");
  Statement stmt = conn.createStatement();
  String name = request.getParameter("name");
  String query="select * from employee where name='"+ name +"'";
  ResultSet rs = stmt.executeQuery(query);
  rs.next();
  String contact = rs.getString("contact");
  String designation = rs.getString("designation");
  out.println("{\"name\":\""+name+"\",\"designation\":\""+designation+"\",\"contact\":\""+contact+"\"}");
%>
