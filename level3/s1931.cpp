//conference room

#include<iostream>
#include<vector>
#include<utility>
#include<algorithm>
using namespace std;

bool cmp(const pair<int,int> &a,const pair<int,int> &b){
    if(a.second == b.second) return a.first<b.first;
    return a.second<b.second;
}

int main(void){
    ios::sync_with_stdio(0);
	cin.tie(0);
    int n;
    vector<pair<int,int> > c;
    cin >> n;

    for(int i = 0; i < n;i++){
        int s,e;
        cin >> s >> e;
        c.push_back(make_pair(s,e));
    }

    sort(c.begin(),c.end(),cmp);

    int count = 0;
    int end = 0;
    for(int i = 0; i < n; i++){
        if(c[i].first >= end){
            count++;
            end = c[i].second;
        }
    }
    cout << count;

}