<%@page import="java.util.*"%>
<html>
  <head><title>URL rewriting demo</title></head>
  <body>
    <%
    int last = 0;
    String param = request.getParameter("int");
    if(param != null) last = Integer.parseInt(param);
    out.println(last);
    %>
    <br>
    <a href="page2.jsp?int=<%=last-1%>">prev</a>
    <a href="page2.jsp?int=<%=last+1%>">next</a>
  </body>
</html>
