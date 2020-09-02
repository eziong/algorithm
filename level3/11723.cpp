// set

#include<iostream>
using namespace std;

int main(void){
    int n;
    bool set[21] = {false,};
    scanf("%d",&n);
    for(int i = 0; i < n; i++){
        char order[10];
        int x;
        scanf("%s %d",&order,&x);
        switch (order[1])
        {
        case 'd': // add
            set[x] = true;
            break;
        case 'e': // remove
            set[x]=false;
            break;
        case 'h': // check
            if(set[x]) printf("1\n");
            else printf("0\n");
            break;
        case 'o': // toggle
            if(set[x]) set[x]=false;
            else set[x]=true;
            break;
        case 'l': // all
            for(int j = 0; j < 21; j++)set[j] = true;
            break;
        case 'm': // empty
            for(int j = 0; j < 21; j++)set[j] = false;
            break;
        default:
            break;
        }

    }

}