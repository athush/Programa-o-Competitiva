#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;

    for (int i = 0; i < n; i++){
        string word;
        cin >> word;
        if(word.length() > 10){
            int t = word.length() - 2;
            cout << word[0] << t << word[t+1] << endl;
        }else{
            cout << word << endl;
        }

    }

    return 0;
}