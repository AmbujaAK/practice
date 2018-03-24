import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;

public class studentData extends HttpServlet {
	public void doGet(HttpServletRequest request, HttpServletResponse response)
		throws IOException, ServletException {
		response.setContentType("text/html");
		PrintWriter output = response.getWriter();

		output.println("<html>");
		output.println("<head>");
		output.println("<title> Student Data</title>");
		output.println("</head>");

    		output.println("<body>");
  		output.println("<h1> Hello, Ambuja </h1>");
    		output.println("<hr>");
    		output.println("<form>");
    		output.println("<input type='text' id='text' placeholder='Enter roll number' value=''/>");
    		output.println("<input type='button' id='btn' onclick='display()' value='Click Me'/>");
    		output.println("</form><br>");
    		output.println("<form>");
  		output.println("<b>Department:</b>");
  		output.println("<select id='dept' onchange='display()'>");
    	output.println("<option value='-1'>----select any Department----</option>");
  		output.println("<option value='0'>IT</option>");
  		output.println("<option value='1'>POWER</option>");
  		output.println("<option value='2'>INSTRUMENTATION</option>");
  		output.println("<option value='3'>CONSTRUCTION</option>");
    	output.println("<option value='4'>PRINTING</option>");
  		output.println("</select>");
  		output.println("</br>");
    	output.println("</form>");
    	output.println("<hr>");
    	output.println("<div id='content'></div>");
  		output.println("</body>");
			output.println("</html>");
	}
}
