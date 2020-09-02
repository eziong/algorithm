// hide and seek

#include<iostream>
using namespace std;

# define MAX 100002;

int arr[100002];

void F(int count, int pos){
    if(pos > 0 && pos < 100002 && arr[pos] > count){
        arr[pos] = count++;
        //printf("%d : %d\n",pos,arr[pos]);
    }else return;
    F(count,pos-1);
    F(count,pos+1);
    F(count,pos*2);
}

int main(){
    int n,k;
    cin >> n >> k;
    for(int i = 0; i < 100002;i++)arr[i] = MAX;
    F(0,5);
    printf("%d",arr[k]);
}
