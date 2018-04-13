import java.io.*;
import javax.servlet.*;
import javax.servlet.http.*;
import java.sql.*;
import java.util.Properties;

public class GetDetails extends HttpServlet {
    public void doPost(HttpServletRequest request, HttpServletResponse response)
      throws ServletException, IOException {
        PrintWriter out = response.getWriter();
        response.setContentType("text/html");
        String name = request.getParameter("name");
        String department = request.getParameter("dept");

        String title = "Details: "+((name != null)?name:department);
        String docType =
            "<!doctype html public \"-//w3c//dtd html 4.0 " +
            "transitional//en\">\n";

        out.println(docType +
            "<html>\n" +
                "<head><title>" + title + "</title></head>\n" +
                "<body bgcolor = \"#f0f0f0\">\n" +
                    "<h1 align = \"center\">" + title + "</h1> \n"+
                    "<ul>\n");

        if(name != null){
            out.println(showByName(name));
        }else{
            out.println(showByDept(department));
        }

        out.println("</ul>\n" +
        "</body></html>");
    }

    private String showByName(String name){
        Properties p = new Properties();
        p.put("user","root");//Username
        p.put("password","");//Pasword
        String database = "wt2";//Database name
        String out = "";
        try{
            Connection conn = Database.getConnection(database, p);

            String query = "SELECT * from `q18` WHERE `name` = \""+name+"\"";
            ResultSet rs = Database.query(conn, query);
            boolean present = false;
            while(rs.next()){
                present = true;
                out += (
                    "<li><strong>Name :</strong>"+
                    rs.getString("name")+"</li>\n"+
                    "<li><strong>Roll :</strong>"+
                    rs.getString("roll")+"</li>\n"+
                    "<li><strong>Department :</strong>"+
                    rs.getString("dept")+"</li>\n</br></br>"
                );
            }
            if(!present){
                out += ("No Student with the name "+name+" is present.");
            }
            Database.closeConnection(conn);
        }catch(Exception e){
            out += ("Please Try Again");
        }
        return out;
    }

    private String showByDept(String dept){
        Properties p = new Properties();
        p.put("user","root");//Username
        p.put("password","");//Password
        String database = "wt2";//Database name
        String out = "";
        try{
            Connection conn = Database.getConnection(database, p);

            String query = "SELECT * from `q18` WHERE `dept` = \""+dept+"\"";
            ResultSet rs = Database.query(conn, query);
            boolean present = false;
            while(rs.next()){
                present = true;
                out += (
                    "<li><strong>Name :</strong>"+
                    rs.getString("name")+"</li>\n"+
                    "<li><strong>Roll :</strong>"+
                    rs.getString("roll")+"</li>\n"
                );
            }
            if(!present){
                out += (dept+" is not present.");
            }
            out += ("</ul>\n" +
            "</body></html>");
            Database.closeConnection(conn);
        }catch(Exception e){
            out += ("Please Try Again");
        }
        return out;
    }


}

class Database{
    private static final String DB_CLASSNAME = "com.mysql.jdbc.Driver";
    private static final String CONNECTION = "jdbc:mysql://localhost:3306/";

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
