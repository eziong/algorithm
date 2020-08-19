// cutting tree

#include<iostream>
#include<cstring>
using namespace std;


int tree[1000000];

/*class MaxHeap{
    int pos;
public:
    MaxHeap(int n);
    void push(int e);
    int pop();
    void swap(int* a, int* b);
};
MaxHeap::MaxHeap(int n){
    pos = 0;
}
void MaxHeap::push(int e){
    int parent;
    int child;
    child = ++pos;
    parent = child / 2;
    tree[child] = e;
    while(child>1 && tree[parent] < tree[child]){
        swap(&tree[parent], &tree[child]);
        child = parent;
        parent /= 2;
    }
}
int MaxHeap::pop(){
    int parent;
    int child;
    int ret = tree[1];
    if(pos>0){
        swap(&tree[1],&tree[pos--]);
    }
    parent = 1;
    child = parent * 2;
    if(child + 1 <= pos){
        child = (tree[child + 1] > tree[child]) ? child + 1 : child;
    }
    while(child <= pos && tree[parent] < tree[child]){
        swap(&tree[parent], &tree[child]);
        parent = child;
        child = child * 2;
        if(child + 1 <= pos){
            child = (tree[child+1]>tree[child]) ? child+1:child;
        }
    }
    return ret;
}
void MaxHeap::swap(int* a, int* b){
    int tmp;
    tmp = *a;
    *a = *b;
    *b =tmp;
}*/
int main(){
    int n;
    long long m;
    long long tmp;
    long long max = 0;
    cin >> n;
    cin >> m;
    //MaxHeap mh = MaxHeap(n);
    for(int i = 0;i<n;i++){
        //cin >> tmp;
        scanf("%lld",&tmp);
        //mh.push(tmp);
        if(tmp > max) max = tmp;
        tree[i] = tmp;
    }
    //long long k = mh.pop();
    long long left = 0;
    long long right = max;
    while(left <= right){
        long long mid = (left + right) / 2;
        long long sum = 0;
        for(int i = 0; i< n; i++){
            sum += (tree[i] - mid > 0)?tree[i]-mid : 0;
            if(sum >= m) break;
        }
        if(sum>=m){
            left = mid+1;
        }else{
            right = mid-1;
        }
    }
    cout << right;
    return 0;
}