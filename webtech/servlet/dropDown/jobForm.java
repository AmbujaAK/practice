import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

@WebServlet("/jobForm")
public class jobForm extends HttpServlet {
   protected void doPost(HttpServletRequest request, HttpServletResponse response)
            throws ServletException, IOException {
      response.setContentType("text/html;charset=UTF-8");
      PrintWriter out = response.getWriter();
      out.println("<html>");
      out.println("<head><title>Job Forms</title></head>");
      out.println("<body>");
      out.println("<div>");
      String jobCategory = request.getParameter("jobCat");
      out.println("<h3> Job category : " + jobCategory + "</h3>");
      out.println("</div>");
      out.println("</body>");
      out.println("</html>");
    }
}
