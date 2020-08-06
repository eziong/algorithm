//printer queue

import java.util.*;
import java.io.*;

public class s1966 {
    public static void main(String[] args){
        try {
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            int C = Integer.parseInt(br.readLine());
            for(int i = 0;i < C;i++){
                StringTokenizer st1 = new StringTokenizer(br.readLine());
                int N = Integer.parseInt(st1.nextToken());
                int M = Integer.parseInt(st1.nextToken());
                StringTokenizer st2 = new StringTokenizer(br.readLine());
                int[] que = new int[N];
                for(int j = 0;j<N;j++){
                    que[j] = Integer.parseInt(st2.nextToken());    
                }
                System.out.println(printerQueue(M, que));
                
            }
        } catch (Exception e) {
            //TODO: handle exception
            e.printStackTrace();
        }
    }
    public static int printerQueue(int M, int[] que){
        int N = que.length;
        PriorityQueue<Print> pr = new PriorityQueue<>();
        for(int i = 0;i < N;i++){
            pr.add(new Print(i,que[i]));
        }
        for(int i = 0; i < N; i++){
            int k = pr.poll().num;
            System.out.println(k);
            if(k == M) return i;
        }
        return 0;
    }
}
class Print implements Comparable<Print>{
    int num;
    int priority;
    public Print(int num, int priority) {
        this.num = num;
        this.priority = priority;
    }

    @Override
    public int compareTo(Print p){
        if(this.priority>p.priority){
            return -1;
        }else{
            return 1;
        }
    }
}