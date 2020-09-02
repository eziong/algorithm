// making 1

#include<iostream>
using namespace std;

int arr[1000001] = {0,};

int find_min(int a, int b){
    return a<b?a:b;
}


int main(){
    arr[2] = 1;
    arr[3] = 1;
    int n;
    cin >> n;
    if(n==2 || n==3){
        printf("1");
        return 0;
    }
    for(int i = 4;i<n+1;i++){
        if(i%3!=0 && i%2!=0) arr[i] = arr[i-1]+1;
        else if(i%3!=0 && i%2==0) arr[i] = find_min(arr[i/2],arr[i-1])+1;
        else if(i%3==0 && i%2!=0) arr[i] = find_min(arr[i/3],arr[i-1])+1;
        else arr[i] = find_min(find_min(arr[i/3],arr[i/2]),arr[i-1])+1;
    }
    printf("%d",arr[n]);
    return 0;
}