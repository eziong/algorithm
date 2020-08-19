//bee house
// 1 -> 7 -> 24 -> 44 ...
// 1 -> 2 -> 8 -> 25 -> 45 ...
#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count = 0;
    while(n>0){
        if(count==0){
            n--;
            count++;
        }else{
            n -= count*6;
            count++;
        }
    }
    cout << count;
}