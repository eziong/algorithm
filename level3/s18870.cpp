//compression of the coordinates

#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
using namespace std;

long long arr[1000001];

int main(void){
    int n;
    scanf("%d",&n);
    vector<long long> v;
    for(int i = 0; i < n; i++){
        long long tmp;
        scanf("%lld",&tmp);
        arr[i] = tmp;
        v.push_back(tmp);
    }
    sort(v.begin(),v.end());
    unique(v.begin(),v.end());
    for(int i = 0; i < n; i++){
        long long tmp = arr[i];
        for(int j = 0; j < v.size(); j++){
            if(tmp == v[j]){
                printf("%d ",j);
                break;
            }
        }
    }
}