import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class long_encoded_string {

    static int[] frequency(String s) {
        int[] res = new int[26];
        int len = s.length();
        int i = 0;
        while(i < len){
            int val = 0;
            if(i + 2 >= len || s.charAt(i + 2) != '#'){//single num
                val = s.charAt(i) - '0';
                res[val - 1]++;
                i++;
            }else if(s.charAt(i + 2) == '#'){//double num
                val = (s.charAt(i) - '0')*10 + (s.charAt(i + 1) - '0');
                res[val - 1]++;
                i = i + 3;
            }
            if(i < len){//update frequency
                 if(s.charAt(i) == '('){
                    int freq = s.charAt(i + 1) - '0';
                    res[val - 1] += freq - 1;
                    i = i + 3;
                }
            }
        }
        return res;
    }
    public static void main(String[] args) throws IOException {
          Scanner in = new Scanner(System.in);
          final String fileName = System.getenv("OUTPUT_PATH");
          BufferedWriter bw = null;
          if (fileName != null) {
              bw = new BufferedWriter(new FileWriter(fileName));
          }
          else {
              bw = new BufferedWriter(new OutputStreamWriter(System.out));
          }

          int[] res;
          String s;
          try {
              s = in.nextLine();
          } catch (Exception e) {
              s = null;
          }

          res = frequency(s);
          for(int res_i = 0; res_i < res.length; res_i++) {
              bw.write(String.valueOf(res[res_i]));
              bw.newLine();
          }

          bw.close();
      }
  }
