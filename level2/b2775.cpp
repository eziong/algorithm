// the president of womens's association

#include<iostream>
#include<cstring>
using namespace std;

int main(){
    int apt[15][15];
    for(int i = 0;i < 15; i++){
        if(i == 0){
            for(int j = 0; j< 15; j++){
                apt[i][j] = j;
            }
        }else{
            for(int j = 0;j < 15; j++){
                apt[i][j] = 0;
                for(int k = 0;k <= j; k++){
                    apt[i][j] += apt[i-1][k];
                }
            }
        }
    }
    int T;
    cin >> T;
    for(int i=0; i<T; i++){
        int k,n;
        //cin >> k;
        //cin >> n;
        //cout << apt[k][n] << endl;
        scanf("%d",&k);
        scanf("%d",&n);
        printf("%d\n",apt[k][n]);
    }
}