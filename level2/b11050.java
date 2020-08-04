//binominal cefficient

import java.io.*;
import java.util.StringTokenizer;

public class b11050 {
    static public void main(String[] args) {
        try {
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            StringTokenizer st = new StringTokenizer(br.readLine());
            int N = Integer.parseInt(st.nextToken());
            int K = Integer.parseInt(st.nextToken());

            System.out.println(Combination(N,K));
        } catch (Exception e) {
            //TODO: handle exception
        }
    }
    static public int Combination(int N,int K){
        int denominator = 1;
        int numerator = 1;
        for (int n = N; n>N-K;n--) {
            numerator *= n;
        }
        for(int k = K;k>0;k--){
            denominator *= k;
        }
        return numerator/denominator;
    }
}