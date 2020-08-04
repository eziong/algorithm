//parenthesis

import java.io.*;

public class b9012 {
    public static void main(String[] args) {
        try{
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            int T = Integer.parseInt(br.readLine());
            //br.read();
            String[] lines = new String[T];
            for(int i = 0;i<T;i++){
                lines[i] = br.readLine();
            }
            for(int i = 0;i<T;i++){
                if(VPS(lines[i])) System.out.println("YES");
                else System.out.println("NO");
            }
        }catch(IOException e){
            e.printStackTrace();
        }
    }
    public static boolean VPS(String line){
        int parenthesis = 0;
        for(int i = 0;i<line.length();i++){
            if(line.charAt(i) == '(') parenthesis++;
            else parenthesis --;
            if (parenthesis < 0) return false;
        }
        return (parenthesis==0) ? true : false;
    }
}
