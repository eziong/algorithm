//making colored paper

#include<iostream>
using namespace std;

int paper[128][128];

int b = 0;
int w = 0;

bool check(int n, int x,int y){
    int first = paper[y][x];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(first != paper[y+i][x+j]) return false;
        }
    }
    return true;
}

void make(int n,int x,int y){
    if(check(n,x,y)){
        int first = paper[y][x];
        if(first == 0) w++;
        else b++;
        return;
    }
    make(n/2,x,y);
    make(n/2,x+n/2,y);
    make(n/2,x,y+n/2);
    make(n/2,x+n/2,y+n/2);
}

int main(void){
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d",&paper[i][j]);
    
    make(n,0,0);
    cout << w << endl << b;
}