// arrangement of a list of words

#include<iostream>
#include<cstring>
using namespace std;

void swap(string* a, string* b){
    string tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}
class ArrangeWord {
    int N;
    int pos;
    string words[20001];
public:
    ArrangeWord();
    void inputWords();
    void push(string word);
    string pop();
    bool compare(string a,string b);
};
ArrangeWord::ArrangeWord(){
    pos = 0;
}
bool ArrangeWord::compare(string a, string b){
    if(a.length()>b.length()) return true;
    else if(a.length()==b.length()){
        if(a.compare(b)==1) return true;
        else false;
    }else{
        return false;
    }
}
void ArrangeWord::push(string word){
    words[++pos] = word;

    int child = pos;
    int parent = child / 2;
    while(child>1 && compare(words[parent],words[child])){
        swap(&words[parent],&words[child]);
        child = parent;
        parent = child / 2;
    }

}
string ArrangeWord::pop(){
    string ret = words[1];
    swap(&words[1],&words[pos]);
    pos--;

    int parent = 1;
    int child = parent * 2;
    if(child + 1 <= pos){
        child = (compare(words[child+1],words[child]))?child:child+1;
    }
    while(child<=pos && compare(words[parent],words[child])){
        swap(&words[parent],&words[child]);
        parent = child;
        child = child * 2;
        if(child + 1 <= pos){
            child = (compare(words[child+1],words[child]))?child:child+1;
        }
    }
    return ret;
}
void ArrangeWord::inputWords() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        string tmp;
        cin >> tmp;
        push(tmp);
    }
    for (int i = 0; i < N; i++) {
        cout << pop() <<endl;
    }
}

int main() {
    ArrangeWord aw;
    aw.inputWords();
    return 0;
}