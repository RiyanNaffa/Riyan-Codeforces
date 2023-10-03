#include <iostream>
using namespace std;

int main(){
    short int t, x;
    int min = 999999999;
    cin >> t;
    for(int i = 0; i<t; i++){
        cin >> x;
        if(x < 10) cout << x << endl;
        else if(x < 18) cout << x-9 << 9 << endl;
        else if(x < 25) cout << x-17 << 89 << endl;
        else if(x < 31) cout << x - 24 << 789 << endl;
        else if(x < 36) cout << x - 30 << 6789 << endl;
        else if(x < 40) cout << x - 35 << 56789 << endl;
        else if(x < 43) cout << x - 39 << 456789 << endl;
        else if(x < 45) cout << x - 42 << 3456789 << endl;
        else if(x==45) cout << 123456789 << endl;
        else cout << -1 << endl;
        }

    return 0;
}
