import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;
import java.sql.*;
import java.util.Properties;

public class GetDepartments extends HttpServlet {

    public void doGet(HttpServletRequest request, HttpServletResponse response)
        throws ServletException, IOException {

        PrintWriter out = response.getWriter();
        Properties p = new Properties();
        String database = "tamseel";//Database name
        p.put("user","root");//Username
        p.put("password","tamseel");//Password

        try{
            Connection conn = Database.getConnection(database, p);
            response.setContentType("text/html");
            String docType =
                "<!doctype html public \"-//w3c//dtd html 4.0 " +
                "transitional//en\">\n";
            out.println(
                docType+" <html><head> "+
                "<title> Student Details </title>"+
                "</head><body>"+
                "<h1>Search by Student's Name</h1>"+
                "<form action=\"GetDetails\" method=\"POST\">"+
                "<input type=\"text\" name=\"name\" placeholder=\"Enter Name Here\">"+
                "<input type=\"submit\">"+
                "</form><h1>Search by Department's Name</h1>"+
                "<form action=\"GetDetails\" method=\"POST\">"+
                "<select name=\"dept\">"
            );
            
            String query = "SELECT DISTINCT `dept` from `q18`";
            ResultSet rs = Database.query(conn, query);
            boolean present = false;
            while(rs.next()){
                present = true;
                out.println(
                    "<option value=\""
                    +rs.getString("dept")+
                    "\">"+
                    rs.getString("dept")+"</option>\n"
                );
            }
            out.println(
                "</select>"+
                "<input type=\"submit\">"+
                "</form>\n" +
                "</body></html>"
            );
            Database.closeConnection(conn);
        }catch(Exception e){
            out.println("Please Try Again");
        }
    }
}

class Database{
    private static final String DB_CLASSNAME = "com.mysql.jdbc.Driver";
    private static final String CONNECTION = "jdbc:mysql://127.0.0.1/";

    public static Connection getConnection(String dbName, Properties credentials) 
    throws ClassNotFoundException, SQLException{
        Class.forName(DB_CLASSNAME);
        Connection con = DriverManager.getConnection(CONNECTION+dbName, credentials);
        return con;
    }

    public static ResultSet query(Connection con, String query) throws SQLException{
        Statement stmt = con.createStatement();
        return stmt.executeQuery(query);
    }

    public static void closeConnection(Connection con) throws SQLException{
        con.close();
    }
}
