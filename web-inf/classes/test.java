import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;

public class test extends HttpServlet {
  protected void doPost(HttpServletRequest request, HttpServletResponse response)
  throws IOException,ServletException {
    response.setContentType("text/html;charset=UTF-8");
    PrintWriter out = response.getWriter();
    try {
      out.println("<h1>Hello world </h1>");
    } finally {
      out.close();
    }
  }
}
