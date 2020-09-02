// MIN_HEAP

#include<iostream>
using namespace std;

int heap[100001];
int heap_count = 0;

void swap(int* a,int* b){
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

void push(int e){
    int child = ++heap_count;
    int parent = child/2;
    heap[child] = e;
    while(child>1){
        if(heap[child]<heap[parent]) swap(&heap[child],&heap[parent]);
        child = parent;
        parent >>= 2;
    }
}

int pop(){
    if(heap_count==0) return 0;
    int ret = heap[1];
    swap(&heap[1],&heap[heap_count--]);
    int parent = 1;
    int child = parent*2;
    if(child+1 <= heap_count) child = (heap[child]<heap[child+1])?child:child+1;
    while(child <= heap_count){
        if(heap[child]<heap[parent]) swap(&heap[child],&heap[parent]);
        parent = child;
        child <<= 2;
        if(child+1 <= heap_count) child = (heap[child]<heap[child+1])?child:child+1;
    }
    return ret;
}

int main(){
    int n;
    //cin >> n;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        int e;
        //cin >> e;
        scanf("%d",&e);
        if(e == 0) cout << pop() << endl;
        else push(e);
    }
}