// zero

#include<iostream>
using namespace std;

int main(){
    int k;
    int stack[100001];
    int pos = 0;
    cin >> k;
    for(int i = 0; i< k; i++){
        int tmp;
        cin >> tmp;
        if(tmp == 0) pos--;
        else stack[pos++] = tmp;
    }
    int ret = 0;
    for(int i = 0; i< pos;i++){
        ret += stack[i];
    }
    cout << ret;
    
}