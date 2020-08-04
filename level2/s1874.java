//sequence stack

import java.io.*;
import java.util.*;

public class s1874 {
    static public void main(String[] args){
        try {
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            int n = Integer.parseInt(br.readLine());
            int[] seq = new int[n];
            for(int i = 0;i<seq.length;i++){
                seq[i] = Integer.parseInt(br.readLine());
            }

            if(!mkseq(n,seq)) System.out.println("NO");
        } catch (Exception e) {
            //TODO: handle exception
        }
    }
    static public boolean mkseq(int n,int[] seq){
        int[] st = new int[n+1];
        st[0] = 0;
        int pos = 0;
        int top = 0;
        StringBuilder sb = new StringBuilder();
        for(int s:seq){
            if(s>st[pos]){
                while(s!=top){
                    st[++pos] = ++top;
                    sb.append("+\n");
                    if(top == s) {
                        pos--;
                        sb.append("-\n");
                    }
                }
            }else if(s<st[pos]){
                return false;
            }else{
                pos--;
                sb.append("-\n");
            }
        }
        System.out.print(sb);
        return true;
    }
}