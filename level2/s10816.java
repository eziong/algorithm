// number card2

import java.io.*;
import java.util.*;

public class s10816 {
    public static void main(String[] args) {
        try {
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            int N = Integer.parseInt(br.readLine());
            StringTokenizer st1 = new StringTokenizer(br.readLine());
            Map<Integer,Integer> hm = new HashMap<Integer,Integer>();
            for(int i = 0; i <N; i++){
                int key = Integer.parseInt(st1.nextToken());
                if(hm.containsKey(key)){
                    hm.put(key,hm.get(key)+1);
                }else{
                    hm.put(key,1);
                }
            }

            int T = Integer.parseInt(br.readLine());
            StringTokenizer st2 = new StringTokenizer(br.readLine());
            for(int i = 0; i <T; i++){
                int key = Integer.parseInt(st2.nextToken());
                System.out.print(hm.get(key)!=null ? hm.get(key)+" ":0+" ");
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}