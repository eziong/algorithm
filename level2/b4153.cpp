// right-angled triangle

#include<iostream>
using namespace std;

void swap(int* a, int* b){
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main(){
    while(true){
        int s[3];
        cin >> s[0] >> s[1] >> s[2];
        if(s[0]==0 && s[1]==0 && s[2]==0) break;
        for(int i = 0; i < 3; i++){
            if(s[0]<s[i])swap(&s[0],&s[i]);
        }
        if(s[0]*s[0]==s[1]*s[1]+s[2]*s[2]) cout << "right"<<endl;
        else cout << "wrong" <<endl;
    }
}