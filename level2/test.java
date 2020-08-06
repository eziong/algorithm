import java.io.*;
import java.util.*;

public class test {
   public static void main (String args[]) {
      try{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int[] num = new int[n];
        for(int i=0; i<n; i++)
          num[i] = Integer.parseInt(br.readLine());
        Arrays.sort(num);
        StringBuilder sb = new StringBuilder();
        for(int i=0; i<n; i++)
          sb.append(num[i]+"\n");
        System.out.print(sb);
      } catch (Exception e) {
        //TODO: handle exception
        e.printStackTrace();
    }
}
}