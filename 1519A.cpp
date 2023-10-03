#include <iostream>
using namespace std;

long long test, red, blue, d;

int main(){
    cin >> test;
    while(test--){
        cin >> red >> blue >> d;
        if((max(red,blue)-min(red,blue)) > (min(red,blue)*d)) cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return  0;
}