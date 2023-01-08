#include <iostream>

using namespace std;

int main(){
    int n, s, total = 0;
    cin >> n;
    for(int i = 0; i < n; i++){
        int t = 0;
        for(int j = 0; j < 3; j++){
            cin >> s;
            if (s == 1) t++; 
        }
        if(t >= 2) total++;
    }
    cout << total << endl;
    return 0;
}