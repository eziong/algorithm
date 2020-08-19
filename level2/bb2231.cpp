// disassembly sum

#include<iostream>
using namespace std;


int arr[1000001];

int main(){
    int n;
    cin >> n;
    for(int i = 0;i<1000001;i++) {arr[i] = 0;}
    for(int i = 0;i<1000001;i++){
        int sum = i;
        int tmp = i;
        while(tmp>0){
            sum += tmp%10;
            tmp /= 10;
        }
        if(sum <= 1000000){
            if(arr[sum]==0 || arr[sum]>i){arr[sum] = i;}
        }
    }
    cout << arr[n] << endl;
    return 0;
}