import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.ServletException;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

public class PersonQueryServlet extends HttpServlet {
  public void doGet(HttpServletRequest request, HttpServletResponse response)
    throws ServletException, IOException {
      response.setContentType("text/html");
      PrintWriter out = response.getWriter();
      out.println("<HEAD><TITLE> Query Result</TITLE></HEAD>");
      out.println("<BODY>");
      String persontype = request.getParameter("persontype");
      String number = request.getParameter("name");
      if(persontype.equals("student")) {
      /* ... code to find students with the specified name ...
      ... using JDBC to communicate with the database ..
      */
      out.println("<table BORDER COLS=3>");
      out.println(" <tr> <td>ID</td> <td>Name: </td>" +
                  " <td>Department</td> </tr>");
/* for(... each result ...){
... retrieve ID, name and dept name
... into variables ID, name and deptname
out.println("<tr> <td>" + ID + "</td>" +
"<td>" + name + "</td>" +
"<td>" + deptname + "</td></tr>");
};
*/

      out.println("</table>");
      }
      else {
/* ... as above, but for instructors ... */
      }
      out.println("</BODY>");
      out.close();
    }
  }
