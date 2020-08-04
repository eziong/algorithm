//cutting LAN cable

import java.io.*;
import java.util.*;

public class s1654 {
    static public void main(String[] args){
        try {
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            StringTokenizer st = new StringTokenizer(br.readLine());
            int K = Integer.parseInt(st.nextToken());
            int N = Integer.parseInt(st.nextToken());
            int[] LAN = new int[K];
            for(int i = 0;i < K;i++){
                LAN[i] = Integer.parseInt(br.readLine());
            }
            System.out.println(cutting(N,LAN));

        } catch (Exception e) {
            //TODO: handle exception
            e.printStackTrace();
        }
    }
    static public long cutting(int N, int[] LAN){
        Arrays.sort(LAN);
        long left = 1;
        long right = LAN[LAN.length - 1];
        while(left <= right){
            long mid = (left + right) / 2;
            int count = 0;
            for(int l: LAN){
                count += (l/mid);
            }
            if(count < N){
                right = mid - 1;
            }else{
                left = mid + 1;
            }
        }
        return right;
    }
}