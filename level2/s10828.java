//stack

import java.io.*;

public class s10828 {
    public static void main(String[] args){
        try {
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            int N = Integer.parseInt(br.readLine());
            stack st = new stack();
            for(int i = 0; i < N; i++){
                String line[] = br.readLine().split(" ");
                switch(line[0]){
                    case "push":{
                        st.push(Integer.parseInt(line[1]));
                        break;
                    }
                    case "pop":{
                        System.out.println(st.pop());
                        break;
                    }
                    case "size":{
                        System.out.println(st.size());
                        break;
                    }
                    case "empty":{
                        System.out.println(st.empty());
                        break;
                    }
                    case "top":{
                        System.out.println(st.top());
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
class stack{
    int pos = -1;
    int[] s = new int[10000];
    public stack(){}
    public void push(int e){
        pos++;
        s[pos] = e;
    }
    public int pop(){
        if(pos < 0){
            return -1;
        }else{
            pos--;
            return s[pos+1];
        }
    }
    public int size(){
        return (pos < 0) ? 0:pos+1;
    }
    public int empty(){
        if(pos<0) return 1;
        else return 0;
    }
    public int top(){
        return (pos<0) ? -1 : s[pos];
    }

}