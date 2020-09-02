// fibonacci

#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    for(int i = 0; i< t; i++){
        int n;
        cin >> n;
        int zero = 1;
        int one = 0;
        for(int i = 0; i < n; i++){
            int tmp = zero;
            zero = one;
            one = tmp + one;
        }
        printf("%d %d\n",zero,one);
    }
}