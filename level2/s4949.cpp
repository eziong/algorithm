// balanced world

#include<iostream>
using namespace std;

int main(){
    bool escape = false;
    while(true){
        char stack[100];
        int pos = -1;
        bool first = true;
        bool bal = true;
        while(char c = getchar()){
            if(c == '.'){
                if(first) escape = true;
                break; 
            }
            if(c == '('){
                stack[++pos] = '(';
            }
            if(c == ')'){
                if(pos > -1 && stack[pos] == '(') pos--;
                else stack[++pos] = ')';
            }
            if(c == '['){
                stack[++pos] = '[';
            }
            if(c == ']'){
                if(pos > -1 && stack[pos] == '[') pos--;
                else stack[++pos] = ']';
            }
            first = false;
        }
        getchar();
        if(pos != -1) bal = false;
        if(escape) break;
        if(!bal) cout << "no" <<endl;
        else cout << "yes" << endl;
    }
    return 0;
}