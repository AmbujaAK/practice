import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;

public class WelcomeServlet extends HttpServlet {
	public void doGet(HttpServletRequest request, HttpServletResponse response)
		throws IOException, ServletException {
		response.setContentType("text/html");
		PrintWriter output = response.getWriter();

		output.println("<html>");
		output.println("	<head>");
		output.println("<title> Servlet </title>");
		output.println("	</head>");
		output.println("	<body>");
		output.println("	<p>Welcome to Servlet Page</p>");
		output.println("	</body>");
		output.println("</html>");
	}
}
