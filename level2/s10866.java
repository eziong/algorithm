//Deque

import java.io.*;

public class s10866 {
    public static void main(String[] args){
        try {
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            int N = Integer.parseInt(br.readLine());
            deque dq = new deque();
            for(int i = 0; i < N; i++){
                String line[] = br.readLine().split(" ");
                switch(line[0]){
                    case "push_front":{
                        dq.push_front(Integer.parseInt(line[1]));
                        break;
                    }
                    case "push_back":{
                        dq.push_back(Integer.parseInt(line[1]));
                        break;
                    }
                    case "pop_front":{
                        System.out.println(dq.pop_front());
                        break;
                    }
                    case "pop_back":{
                        System.out.println(dq.pop_back());
                        break;
                    }
                    case "size":{
                        System.out.println(dq.size());
                        break;
                    }
                    case "empty":{
                        System.out.println(dq.empty());
                        break;
                    }
                    case "front":{
                        System.out.println(dq.front());
                        break;
                    }
                    case "back":{
                        System.out.println(dq.back());
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
class deque{
    int b = (-1+10001)%10001;
    int e = 0;
    int[] s = new int[10001];
    public deque(){}
    public void push_front(int element){
        s[b] = element;
        b = (b-1+10001)%10001;
    }
    public void push_back(int element){
        s[e] = element;
        e = (e+1+10001)%10001;
    }
    public int pop_front(){
        if(empty()==0){
            b = (b+1+10001)%10001;
            int ret = s[b];
            return ret;
        }else{
            return -1;
        }
        
    }
    public int pop_back(){
        if(empty()==0){
            e = (e-1+10001)%10001;
            int ret = s[e];
            return ret;
        }else{
            return -1;
        }
    }
    public int size(){
        return (e-b-1+10001)%10001;
    }
    public int empty(){
        return size()==0 ? 1 : 0;
    }
    public int front(){
        if(empty()==0){
            int tb = (b+1+10001)%10001;
            int ret = s[tb];
            return ret;
        }else{
            return -1;
        }
    }
    public int back(){
        if(empty()==0){
            int te = (e-1+10001)%10001;
            int ret = s[te];
            return ret;
        }else{
            return -1;
        }
    }

}