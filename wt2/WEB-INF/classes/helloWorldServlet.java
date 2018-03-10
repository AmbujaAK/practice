import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;

public class helloWorldServlet extends HttpServlet {
	public void doGet(HttpServletRequest request, HttpServletResponse response)
		throws IOException, ServletException {
		response.setContentType("text/html");
		PrintWriter output = response.getWriter();

		output.println("<html>");
		output.println("	<head>");
		output.println("<title> Servlet </title>");
		output.println("	</head>");
		output.println("	<body>");
		output.println("	<p>Hello World !</p>");
		output.println("	</body>");
		output.println("</html>");
	}

}