// z

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n,r,c;
    cin >> n >> r >> c;
    int ret = 0;
    while(n>0){
        int x = (int)pow(2,--n);
        int y = (int)pow(2,n);
        int pos;
        if(x > c && y > r) pos = 0;
        else if(x <= c && y > r) {
            pos = 1;
            c -= x;
        }
        else if(x > c && y <= r){
            pos = 2;
            r -= y;
        }
        else{
            pos = 3;
            c -= x;
            r -= y;
        }
        ret += x*y * pos;
    }
    printf("%d",ret);
}