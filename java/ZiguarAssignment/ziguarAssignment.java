// Requirement :
// Files : fileNo.txt containing an interger value of 1 

import java.io.*;
import java.util.*;

public class ziguarAssignment {
  // track the last file where element is distributed.
  public static void updatePrevFileNo(int val){
    File fileName = new File("fileNo.txt");
    int count = 0;
    try {
      while(count < 1){
      PrintWriter pw = new PrintWriter(new FileWriter("fileNo.txt", false));
      pw.write(val + "");
      count++;
      pw.close();
      }
    } catch (FileNotFoundException e) {
        System.out.println("Unable to open file");
      } catch (IOException e) {
        System.out.println("Error in reading the file");
      }
  }

  // Track from where element gonna start to be distributed.
  public static int updateFileNo(){
    File fileName = new File("fileNo.txt");
    String ele = null;
    int val = 0;
    try {
      BufferedReader br = new BufferedReader(new FileReader("fileNo.txt"));
      int count = 0;
      while ((ele = br.readLine()) != null) {
        //System.out.println("Element :" + ele);
        val = Integer.parseInt(ele);
        if (val != 1)
          updatePrevFileNo(val);

        //System.out.println("Check updated or not :" + val);
        while(count < 1){
          PrintWriter pw = new PrintWriter(new FileWriter("fileNo.txt", false));
          pw.write(val + "");
          count++;
          pw.close();
        }
      }
    } catch (FileNotFoundException e) {
        System.out.println("Unable to open file");
      } catch (IOException e) {
        System.out.println("Error in reading the file");
      }
      return val;
  }
  // print the element in different file
  public static void printElement(String v,int fileNo){
    try {
      PrintWriter pw = new PrintWriter(new FileWriter("OutpFile" + fileNo + ".txt", true));
      pw.write(v + " ");
      pw.close();
    } catch (FileNotFoundException e) {
      System.out.println("Unable to open file ");
    } catch (IOException e) {
      System.out.println("Error in writting the file ");
    }
  }

  // distribute the element in different files.
  public static void distribution(File fileName,int f,int fileNo) {
    FileReader fr = null;
    BufferedReader br = null;
    int prevFileNo = 0;
    String ele = null;

    try {
      fr = new FileReader(fileName);
      br = new BufferedReader(fr);

      while ((ele = br.readLine()) != null) {
        //System.out.println(ele);

        String[] val = ele.split("\\s");

        for(String v:val){
            if (fileNo == 4 ) {
              fileNo = 1;
            }
            printElement(v,fileNo);
            fileNo++;
        }
      }

      // update file here....................
      prevFileNo = fileNo;
      System.out.println("Next distribution will start from file number :" + prevFileNo);
      updatePrevFileNo(prevFileNo);
      br.close();
    } catch (FileNotFoundException e) {
      System.out.println("Unable to open file '" + fileName + "'");
    } catch (IOException e) {
      System.out.println("Error in reading the file '" + fileName + "'");
    }
  }

  // main function
  public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    System.out.println("Enter the file number 1 or 2 :");
    int f = sc.nextInt();
    File fileName = new File("InputFile" + f + ".txt");
    int fileNo = updateFileNo();
    //System.out.println("check on run :" + fileNo);
    distribution(fileName,f,fileNo);

  }
}
