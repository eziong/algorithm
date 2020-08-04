//director shome?

import java.io.*;


public class s1436{
    static public void main(String[] args){
        try {
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            int N = Integer.parseInt(br.readLine());
            System.out.println(title(N));
        } catch (Exception e) {
            //TODO: handle exception
        }
    }
    static public String title(int N){
        int count = 0;
        for(int i = 0; i < 6660000; i++){
            if(Integer.toString(i).contains("666")) count++;
            if(count == N){
                return ""+i;
            }
        }
        return "";
    }
}