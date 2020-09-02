// 듣보잡

#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
using namespace std;

bool compare(string a, string b){
    return a > b;
}

string ret[500000];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    vector<string> heard;
    vector<string> seen;
    int n,m;
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        string name;
        cin >> name;
        heard.push_back(name);
    }
    for(int i = 0; i < m; i++){
        string name;
        cin >> name;
        seen.push_back(name);
    }
    sort(heard.begin(),heard.end(),compare);
    sort(seen.begin(),seen.end(),compare);
    int count = 0;
    while(!heard.empty() && !seen.empty()){
        if(heard.back() == seen.back()){
            ret[count++] = heard.back();
            heard.pop_back();
            seen.pop_back();
        }else if(heard.back()>seen.back()) seen.pop_back();
        else heard.pop_back();
    }
    cout << count << endl;
    for(int i = 0; i< count; i++) cout << ret[i] << endl;
}