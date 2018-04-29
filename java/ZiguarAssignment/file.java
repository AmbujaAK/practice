import java.io.*;
import java.util.*;

public class file {
/*
  public static void distribution(File fileName){
    FileReader fr = null;
    BufferedReader br = null;
    PrintWriter pw = null;
    StringTokenizer st = null;
    int fileNo = 1;
    int prevFileNo = 0;
    String val = null;

    try {
      fr = new FileReader(fileName);
      br = new BufferedReader(fr);

      while ((val = br.readLine()) != null) {
        System.out.println(val);
        st = new StringTokenizer(val," ");

        while (st.hasMoreTokens()){
          if (fileNo == 4) {
            fileNo = 1;
          }

          pw = new PrintWriter(new FileWriter("OutpFile" + fileNo + ".txt", true));
          pw.write(st.nextToken() + " ");

          fileNo++;

          pw.close();
        }


        System.out.println("Want some more files to read ?? Press '0' to quit !!");
        f = sc.nextInt();
        if (f == 0) {
          break;
        }
        fileName = new File("InputFile" + f + ".txt");
        fileReader = new FileReader(fileName);
        br = new BufferedReader(fr);

      }

      br.close();
    } catch (FileNotFoundException e) {
      System.out.println("Unable to open file '" + fileName + "'");
    } catch (IOException e) {
      System.out.println("Error in reading the file '" + fileName + "'");
    }
  }
*/
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter the file number 1 or 2 :");
    int f = sc.nextInt();
    File fileName = null;
    //fileName = new File("InputFile" + f + ".txt");
    //distribution(fileName);


    PrintWriter B_write = null;
    StringTokenizer st = null;
    int fileNo = 1;
    int prevFileNo = 0;

    String val = null;
    try {
      fileName = new File("InputFile" + f + ".txt");
      FileReader fileReader = new FileReader(fileName);
      BufferedReader B_read = new BufferedReader(fileReader);

      while ((val = B_read.readLine()) != null) {
        System.out.println(val);
        st = new StringTokenizer(val," ");

        while (st.hasMoreTokens()){
          if (fileNo == 4) {
            fileNo = 1;
          }/*
          if (f != 1) {
            fileNo = prevFileNo;
          }*/
          B_write = new PrintWriter(new FileWriter("OutpFile" + fileNo + ".txt", true));
          B_write.write(st.nextToken() + " ");

          fileNo++;
          /*
          if (fileNo != 4) {
            prevFileNo = fileNo;
          }*/
          B_write.close();
        }

        System.out.println("Want some more files to read ?? Press '0' to quit !!");
        f = sc.nextInt();
        if (f == 0) {
          break;
        }
        fileName = new File("InputFile" + f + ".txt");
        fileReader = new FileReader(fileName);
        B_read = new BufferedReader(fileReader);

      }

      B_read.close();
    } catch (FileNotFoundException e) {
      System.out.println("Unable to open file '" + fileName + "'");
    } catch (IOException e) {
      System.out.println("Error in reading the file '" + fileName + "'");
    }
  }
}
