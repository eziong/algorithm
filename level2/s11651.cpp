// Arrange coordinates

#include<iostream>
using namespace std;

long long xy[100000];

void swap(int* a,int* b){
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void quicksort(int left,int right){
    if(left>=right) return;
    int l = left;
    int r = right;
    int mid = (l+r)/2;
    long long pivot = xy[mid];
    while(l<=r){
        while(xy[l]<pivot) l++;
        while(pivot<xy[r]) r--;
        if(l<=r) {
            swap(xy[l],xy[r]);
            l++;r--;
        }
    }
    quicksort(left,r);
    quicksort(l,right);
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
    int n;
    //scanf("%d",&n);
    cin >> n;
    for(int i = 0; i < n;i++){
        long long x,y;
        //scanf("%lld %lld",&x,&y);
        cin >> x >> y;
        xy[i] = (y+100000)*1000000 + (x+100000);
        //printf("%lld\n",xy[i]);
    }
    quicksort(0,n-1);
    for(int i = 0;i < n; i++){
        //printf("%lld %lld\n",xy[i]%1000000-100000,xy[i]/1000000-100000);
        //printf("%lld\n",xy[i]);
        cout << xy[i]%1000000-100000<< " " << xy[i]/1000000-100000 << endl;
    }
}