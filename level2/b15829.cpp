//hash code

#include<iostream>
using namespace std;

int main(){
    int L;
    int num[50];
    long long hash = 0;
    scanf("%d",&L);
    getchar();
    for(int i = 0; i < L; i++){
        int c;
        c = getchar();
        long long pow = 1;
        for(int j = 0;j < i ;j++) {
            pow *= 31;
            pow %= 1234567891;
        }
        hash += (long long)((c-96)*pow);
        hash %= (long long)1234567891;
    }
    printf("%lld\n",hash);
}