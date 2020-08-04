//arrange coordinates

import java.io.*;
import java.util.*;

public class s11650 {
    public static void main(String[] args) {
        try {
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            int N = Integer.parseInt(br.readLine());
            ArrayList<Coordinate> coordinates = new ArrayList<Coordinate>();
            for(int i = 0; i < N; i++){
                StringTokenizer st = new StringTokenizer(br.readLine());
                int x = Integer.parseInt(st.nextToken());
                int y = Integer.parseInt(st.nextToken());
                coordinates.add(new Coordinate(x,y));
            }
            Collections.sort(coordinates);
            for(Coordinate c: coordinates){
                System.out.println(c.x+" "+c.y);
            }
        } catch (Exception e) {
            //TODO: handle exception
        }
    }
}
class Coordinate implements Comparable<Coordinate>{
    int x, y;
    public Coordinate(int x,int y){
        this.x = x;
        this.y = y;
    }
    @Override
    public int compareTo(Coordinate c) {
        // TODO Auto-generated method stub
        if(this.x<c.x){
            return -1;
        }else if(this.x == c.x){
            if(this.y<c.y){
                return -1;
            }else{
                return 1;
            }
        }else{
            return 1;
        }
    }
}