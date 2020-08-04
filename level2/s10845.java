//stack

import java.io.*;

public class s10845 {
    public static void main(String[] args){
        try {
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            int N = Integer.parseInt(br.readLine());
            queue q = new queue();
            for(int i = 0; i < N; i++){
                String line[] = br.readLine().split(" ");
                switch(line[0]){
                    case "push":{
                        q.push(Integer.parseInt(line[1]));
                        break;
                    }
                    case "pop":{
                        System.out.println(q.pop());
                        break;
                    }
                    case "size":{
                        System.out.println(q.size());
                        break;
                    }
                    case "empty":{
                        System.out.println(q.empty());
                        break;
                    }
                    case "front":{
                        System.out.println(q.front());
                        break;
                    }
                    case "back":{
                        System.out.println(q.back());
                        break;
                    }
                    default: break;
                }
            }
        } catch (Exception e) {
            //TODO: handle exception
            e.printStackTrace();
        }
    }
}
class queue{
    int b = 0;
    int e = -1;
    int[] s = new int[10000];
    public queue(){}
    public void push(int element){
        e++;
        s[e] = element;
    }
    public int pop(){
        return (b<=e) ? s[b++] : -1;
    }
    public int size(){
        return (e-b+1);
    }
    public int empty(){
        if(size() == 0) return 1;
        else return 0;
    }
    public int front(){
        return (b<=e) ? s[b] : -1;
    }
    public int back(){
        return (b<=e) ? s[e] : -1;
    }

}