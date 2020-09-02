//non-directed graph

#include<iostream>
#include<vector>
using namespace std;

int edge[1001][1001] = {0,};
bool visited[1001] = {false,};

int main(void){
    ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
    int n,m;
    //scanf("%d %d",&n,&m);
    cin >> n >> m;
    for(int i = 0; i < m; i++){
        int v1,v2;
        //scanf("%d %d",&v1,&v2);
        cin >> v1 >> v2;
        edge[v1][v2] = 1;
        edge[v2][v1] = 1;
    }
    vector<int> q;
    int count = 0;
    for(int i = 0;i < n; i++){
        if(visited[i+1]) continue;
        q.push_back(i+1);
        while(!q.empty()){
            int v = q.back();
            q.pop_back();
            if(!visited[v]){
                visited[v] = true;
                for(int j = 0; j < n; j++){
                    if(edge[v][j+1]==1 && !visited[j+1])q.push_back(j+1);
                }
            }
        }
        count++;
    }
    //printf("%d",count);
    cout << count;
}