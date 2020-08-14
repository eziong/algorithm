// arrangement of a list of words

#include<iostream>
#include<string>
using namespace std;

class ArrangeWord;

int main() {
    ArrangeWord aw();
    int n;
    cin >> n;
    cout << "end" << endl;
}
class ArrangeWord {
    int N;
    string word[20000];
public:
    ArrangeWord();
};
inline ArrangeWord::ArrangeWord() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> word[i];
    }
    for (int i = 0; i < N; i++) {
        cout << word[i];
    }

}