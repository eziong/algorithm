//finding primary number

import java.io.*;
import java.util.*;

public class s1929 {
    static public void main(String[] args){
        try {
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            StringTokenizer st = new StringTokenizer(br.readLine());
            int M = Integer.parseInt(st.nextToken());
            int N = Integer.parseInt(st.nextToken());
            System.out.print(primary(M,N));
        } catch (Exception e) {
            //TODO: handle exception
            e.printStackTrace();
        }

    }
    static public StringBuilder primary(int s,int e){
        StringBuilder sb = new StringBuilder();
        for(int i = s;i<e+1;i++){
            boolean tf = true;
            int end = (int)(Math.pow(i, 0.5));
            if(i>1){
                for(int j = 2; j <= end; j++){
                    if(i%j == 0){
                        tf = false;
                        break;
                    }
                }
            }else{
                tf = false;
            }
            if(tf) sb.append(i+"\n");
        }
        return sb;
    }
}