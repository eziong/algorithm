//tomato

#include<iostream>
#include<queue>
#include<utility>
using namespace std;


int arr[1001][1001] = {0,};
int m,n;

bool check(){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
             if(arr[i][j]==0) return false;
        }
    }
    return true;
}

int main(void){
    int dx[4] = {1,-1,0,0};
    int dy[4] = {0,0,-1,1};
    queue<pair<int,int> > visit;
    cin >> m >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            scanf("%d",&arr[i][j]);
            if(arr[i][j]==1) {
                visit.push(make_pair(j,i));    
            }
        }
    }
    int count = -1;
    visit.push(make_pair(-10,-10));
    while(!visit.empty()){
        pair<int,int> cur = visit.front();
        visit.pop();
        if(cur.first == -10){
            count++;
            if(visit.back().first == -10) break;
            visit.push(make_pair(-10,-10));
            continue;
        }       
        for(int i = 0; i < 4; i++){
            int x = cur.first + dx[i];
            int y = cur.second + dy[i];
           if(x>=0 && x<m && y>=0 && y<n){
                if(arr[y][x]==0) visit.push(make_pair(x,y));
                arr[y][x] = 1;
            }
        }
    }
    if(check()) cout << count;
    else cout << -1;
}