#include <string> 
#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    
    while(true){
        n++;
        string number = to_string(n);

        if(number[0] != number[1] && number[0] != number[2] && number[0] != number[3] && number[1] != number[2] && number[1] != number[3] && number[2] != number[3]) break;
    }

    cout << n << endl;

    return 0;
}