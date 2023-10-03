#include <iostream>
#include <algorithm>
using namespace std;

int jig[50], n, m, hasil=999999999;

int main (){
    cin >> n >> m;
    for(int i = 0; i<m; i++){
        cin >> jig[i];
    }
    sort(jig, jig+m);
    for(int i = 0; i<=m-n; i++){
        if(hasil > (jig[i+n-1]-jig[i])){
            hasil = (jig[i+n-1]-jig[i]);
        }
    }
    cout << hasil;

    return 0;
}
