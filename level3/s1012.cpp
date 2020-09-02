// organic cabbage

#include<iostream>
#include<vector>
#include<utility>
using namespace std;

int field[50][50] = {0,};
int m,n,k;

int DFS(int x,int y){
    vector<pair<int,int>> stack;
    stack.push_back(make_pair(y,x));
    //printf("dfs count x: %d, y: %d\n",x,y);
    while(!stack.empty()){
        pair<int,int> tmp = stack.back();
        stack.pop_back();
        if(tmp.first<0 || tmp.first>=n || tmp.second<0 || tmp.second>=m) continue;
        if(field[tmp.first][tmp.second] == 0) continue;
        field[tmp.first][tmp.second] = 0;
        stack.push_back(make_pair(tmp.first,tmp.second-1));
        stack.push_back(make_pair(tmp.first,tmp.second+1));
        stack.push_back(make_pair(tmp.first-1,tmp.second));
        stack.push_back(make_pair(tmp.first+1,tmp.second));
    }
    return 1;
}

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        cin >> m >> n >> k;
        for(int y = 0; y < n; y++){
            for(int x = 0; x < m; x++){
                field[y][x] = 0;
            }
        }
        for(int j = 0; j < k;j++){
            int x,y;
            cin >> x >> y;
            field[y][x] = 1;
        }
        int count = 0;
        for(int y = 0; y < n; y++){
            for(int x = 0; x < m; x++){
                if(field[y][x] == 1) count += DFS(x,y);
            }
        }
        cout << count << endl;
    }
}