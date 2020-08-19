// body shape

#include<iostream>
using namespace std;


int main(){
    int n;
    int w[51];
    int h[51];
    cin >> n;
    for(int i = 0;i < n; i++){
        cin >> w[i] >> h[i];
    }
    for(int i = 0; i < n; i++){
        int count = 1;
        for(int j = 0; j < n; j++){
            if(w[i] < w[j] && h[i] < h [j]) count++;
        }
        cout << count << " ";
    }
}