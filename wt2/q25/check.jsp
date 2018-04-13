<%@page import="java.sql.*"%>
<%@page import="java.io.*"%>
<%
	String ans = null;
  int count = 0;

	Connection con = null;
	Statement stmt = null;
	String pswd = "";
	int id = 0;

	try {
		Class.forName("com.mysql.jdbc.Driver");
		String url = "jdbc:mysql://localhost:3306/wt2";
		con = DriverManager.getConnection(url, "root", "");
		stmt = con.createStatement();
		ResultSet rs = stmt.executeQuery("select * from q25 where answer = '"+ ans + "'");
		if (rs.next()) {
			ans = rs.getString("q1");
		}

    for(int i=1; i <= 5; i++ ){
      String mark = request.getParameter("q1");
      if (ans == mark) {
        count ++;
      }
    }
    out.println("Number of Correct answer is :" + count);

} catch (Exception e) {
out.println(e);
}
%>
