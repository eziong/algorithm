//max heap

#include<iostream>
#include<queue>
using namespace std;

int  main(void){
    priority_queue<int> pq;
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        int x;
        scanf("%d",&x);
        if(x==0) {
            if(pq.empty()) printf("0\n");
            else{
                printf("%d\n",pq.top());
                pq.pop();
            }    
        }else{
            pq.push(x);
        }
    }
}