// a snail wants to go up

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    long long a,b,v;
    long long day = 0;
    cin >> a >> b >> v;
    long long daily = a - b;
    
    day = ceil((v-b) / (double)(a-b));
    
    cout << day;
}