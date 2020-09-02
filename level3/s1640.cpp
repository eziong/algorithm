// poketmon master 

#include<iostream>
#include<vector>
#include<utility>
#include<cstring>
#include<algorithm>
using namespace std;

vector<pair<string,int>> pokm;

bool comp(const pair<string,int> &a, const pair<string,int> &b){
    return a.second < b.second;
}

struct b_comp{
    bool operator()(const pair<string,int> &a, const string &b){
        return a.first < b;
    }
    bool operator()(const string &b, const pair<string,int> &a){
        return a.first > b;
    }
};

int main(){    
    int n,m;
    cin >> n >> m;
    for(int i = 0; i < n;i++){
        string name;
        cin >> name;
        pokm.push_back(make_pair(name,i+1));
    }
    sort(pokm.begin(),pokm.end(),comp);
    for(int i = 0; i < m; i++){
        string srch;
        cin >> srch;
        binary_search(pokm.begin(),pokm.end(),b_comp());
    }
}