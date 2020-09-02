//dual priority queue

#include<iostream>
using namespace std;

void swap(int* a,int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

class MinHeap{
    int min_heap[1000000];
    int heap_count;
public:
    MinHeap(){
        this->heap_count = 0;
    }
    void push(int e){
        int child = ++heap_count;
        int parent = child/2;
        min_heap[child] = e;
        while(child>1){
            if(min_heap[child]<min_heap[parent])swap(min_heap[child],min_heap[parent]);
            child = parent;
            parent = child/2;
        }
    }
    int pop(){
        int ret = min_heap[heap_count];
        swap(min_heap[heap_count--],min_heap[1]);
        int parent = 1;
        int child = parent * 2;
        if(child+1<=heap_count) child = (min_heap[child]<min_heap[child+1])?child:child+1;
        while(child<=heap_count){
            if(min_heap[child]<min_heap[parent]) swap(min_heap[child],min_heap[parent]);
            parent = child;
            child = parent*2;
            if(child+1<=heap_count) child = (min_heap[child]<min_heap[child+1])?child:child+1;
        }
        return ret;
    }
};

class MaxHeap{
    int max_heap[1000000];
    int heap_count;
public:
    MaxHeap(){
        this->heap_count = 0;
    }
    void push(int e){
        int child = ++heap_count;
        int parent = child/2;
        max_heap[child] = e;
        while(child>1){
            if(max_heap[child]<max_heap[parent])swap(max_heap[child],max_heap[parent]);
            child = parent;
            parent = child/2;
        }
    }
    int pop(){
        int ret = max_heap[heap_count];
        swap(max_heap[heap_count--],max_heap[1]);
        int parent = 1;
        int child = parent * 2;
        if(child+1<=heap_count) child = (max_heap[child]<max_heap[child+1])?child:child+1;
        while(child<=heap_count){
            if(max_heap[child]<max_heap[parent]) swap(max_heap[child],max_heap[parent]);
            parent = child;
            child = parent*2;
            if(child+1<=heap_count) child = (max_heap[child]<max_heap[child+1])?child:child+1;
        }
        return ret;
    }
};


int main(void){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int k;
        cin >> k;
        MaxHeap max_heap;
        MinHeap min_heap;
        for(int j = 0; j < k; j++){
            char c;
            int n;
            scanf("%c %d",&c,&n);
            switch (c)
            {
            case 'I':
                max_heap.push(n);
                min_heap.push(n);
                break;
            case 'D':
                if(n==1)max_heap.pop();
                else min_heap.pop();
                break;
            default:
                break;
            }
        }
    }
}