//ascending order

#include<iostream>
using namespace std;

int main(){
    int num[10001] = {0,};
    int n;
    cin >> n;
    for(int i = 0; i< n; i++){
        int tmp;
        scanf("%d",&tmp);
        num[tmp]++;
    }
    for(int i = 0; i < 10001; i++){
        for(int j = 0; j < num[i];j++){
            printf("%d\n",i);
        }
    }
}