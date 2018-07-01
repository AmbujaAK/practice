import java.io.*;
import java.util.*;

public class updateFile {
  public static void main(String[] args) {
    File fileName = new File("textFile/update.txt");
    String ele = null;

    try {
      BufferedReader br = new BufferedReader(new FileReader("textFile/update.txt"));
      int count = 0;
      while ((ele = br.readLine()) != null) {
        System.out.println("Element :" + ele);
        int val = Integer.parseInt(ele);

        //update file
        System.out.println(val++);
        while(count < 1){
        PrintWriter pw = new PrintWriter(new FileWriter("textFile/update.txt", false));
        pw.write(val + "");
        count++;
        pw.close();
        }
      }
    } catch (FileNotFoundException e) {
        System.out.println("Unable to open file '" + fileName + "'");
      } catch (IOException e) {
        System.out.println("Error in reading the file '" + fileName + "'");
      }
  }
}
