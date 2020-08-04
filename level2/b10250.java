//ACM Hotel

import java.io.*;

public class b10250{
    public static void main(String[] args) {
        try {
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            int T = Integer.parseInt(br.readLine());
            int[][] T_list = new int[T][3];
            for(int i = 0;i<T;i++){
                String[] arr = br.readLine().split(" ");
                for(int j = 0; j<arr.length;j++){
                    T_list[i][j] = Integer.parseInt(arr[j]);
                }
            }
            for(int i = 0; i<T;i++){
                System.out.println(ACM(T_list[i][0],T_list[i][1],T_list[i][2]));
            }
        } catch (IOException e) {
            //TODO: handle exception
            e.printStackTrace();
        }    
    }
    public static String ACM(int H,int W,int N){
        int height = 0;
        int weight = 1;
        while(true){
            while(height != H){
                N--;
                height++;
                if(N<=0) return (weight>9) ? ""+height+weight : height+"0"+weight;
            }
            height = 1;
            if(N>0){
                N--;
                weight++;
                if(N<=0) return (weight>9) ? ""+height+weight : height+"0"+weight;
            }
        }
    }
}