// ordering recording to their age and the date who subscibed at.

import java.io.*;
import java.util.*;

public class s10814 {
    public static void main(String[] args) {
        try {
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            int N = Integer.parseInt(br.readLine());
            ArrayList<Person> members = new ArrayList<>();
            for(int i = 0;i<N;i++){
                String[] arr = br.readLine().split(" ");
                members.add(new Person(arr[0],arr[1],i));
            }
            Collections.sort(members,new PersonCompare());
            for(int i = 0;i<members.size();i++){
                System.out.println(members.get(i).age+" "+members.get(i).name);
            }
        } catch (Exception e) {
            //TODO: handle exception
        }
    }
}
class Person {
    int age;
    String name;
    int s;
    Person(String age, String name, int s){
        this.age = Integer.parseInt(age);
        this.name = name;
        this.s = s;
    }
}
class PersonCompare implements Comparator<Person>{
    int ret = 0;
    @Override
    public int compare(Person p1, Person p2){
        if(p1.age<p2.age) ret = -1;
        if(p1.age == p2.age){
            if(p1.s < p2.s) {
                ret = -1;
            } else if(p1.s>=p2.s) {
                ret = 1;
            }
        }
        if(p1.age>p2.age) ret = 1;

        return ret;
    }

}