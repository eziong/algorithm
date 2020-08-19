// disassembly sum

#include<iostream>
using namespace std;


class Disassembly{
    int arr[1000001];
public:
    Disassembly();
    int construct(int n);
};
Disassembly::Disassembly(){
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
}
int Disassembly::construct(int n){
    cout << arr[n] << endl;
}
int main(){
    Disassembly d;
    int n;
    cin >> n;
    d.construct(n);
    return 0;
}