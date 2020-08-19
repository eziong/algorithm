// statistics

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int n;
    cin >> n;

    int sum = 0;
    int arr[8001] = {0,};
    for(int i = 0;i < n; i++){
        int k;
        cin >> k;
        sum += k;
        arr[k+4000]++;
    }
    //arithmatical average
    cout << round(sum/(double)n) << endl;

    //median
    int tmp = n/2;
    int median;
    for(int i = 0;i<8001;i++){
        tmp -= arr[i];
        if(tmp < 0){
            median = i - 4000;
            break;
        }
    }
    cout << median << endl;
    //mode
    int mode;
    int m_max = 0;
    for(int i = 0;i < 8001;i++){
        if(m_max<arr[i] && arr[i] != 0) m_max = arr[i];
    }
    int count = 0;
    for(int i = 0;i < 8001; i++){
        if(arr[i]==m_max){
            mode = i - 4000;
            count++;
            if(count == 2)break;
        }
    }
    cout << mode << endl;
    //range
    int start = 0;
    int end = 0;
    count = 0;
    for(int i = 0;i<8001;i++){
        if(arr[i]!=0){
            if(count == 0){
                start = i;
                end = start;
            }
            count += arr[i];
            if(count == n){
                end = i;
                break;
            }
        }
    }
    cout << end - start <<endl;

    return 0;
}