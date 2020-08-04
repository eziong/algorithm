//Josephus

import java.io.*;
import java.util.*;

public class s11866 {
    public static void main(String[] args) {
        try {
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            StringTokenizer st = new StringTokenizer(br.readLine());
            int N = Integer.parseInt(st.nextToken());
            int K = Integer.parseInt(st.nextToken());
            ArrayList<Integer> Josepus = josephus(N, K);

            for(int i=0;i<Josepus.size();i++){
                if(i==0) System.out.print("<");
                if(i==Josepus.size()-1)System.out.print((Josepus.get(i)+1)+">");
                else System.out.print((Josepus.get(i)+1)+", ");
            }

        } catch (Exception e) {
            //TODO: handle exception
        }
    }
    public static ArrayList<Integer> josephus(int N,int K){
        boolean[] circle = new boolean[N];
        ArrayList<Integer> ret = new ArrayList<>();
        int n = N;
        int token = -1;
        for(int i = 0; i < circle.length; i++){
            circle[i] = true;
        }
        while(n>0){
            int count = 0;
            while(count < K){
                token = (token+1) % N;
                if(circle[token] == true) count++;
            }
            circle[token] = false;
            n--;
            ret.add(token);
        }
        return ret;
    }
}
