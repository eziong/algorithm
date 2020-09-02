//warm virus

#include<iostream>
#include<vector>
using namespace std;

int main(void){
    int n,e;
    cin >> n >> e;
    bool *visited = new bool[n+1];
    for(int i = 0; i < n+1; i++) visited[i] = false;
    vector<int> *edge = new vector<int>[n+1];
    for(int i = 0; i < e;i++){
        int v1,v2;
        cin >> v1 >> v2;
        edge[v1].push_back(v2);
        edge[v2].push_back(v1);
    }
    vector<int> visit;
    visit.push_back(1);
    int count = -1;
    while(!visit.empty()){
        int cur = visit.back();
        visit.pop_back();
        if(!visited[cur]){
            for(int i = 0; i < edge[cur].size();i++){
                visit.push_back(edge[cur][i]);
            }
            visited[cur] = true;
            count++;
        }
    }
    cout << count;
    
}