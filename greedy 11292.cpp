#include <iostream>
#include <algorithm>
using namespace std;

int jumNa, jumKs, naga[20001], ksa[20001], uang;

int main(){

    while(true){
        uang = 0;
        cin >> jumNa >> jumKs;
        if(jumNa==0 && jumKs==0) break;

        for(int i = 0; i < jumNa; i++) cin >> naga[i];
        for(int i = 0; i < jumKs; i++) cin >> ksa[i];
        sort(naga, naga+jumNa);
        sort(ksa, ksa+jumKs);
        int idNa = 0, idKs = 0;

        while(true){
            if(idKs >= jumKs) {
                cout << "Loowater is doomed!" << endl;
                break;
            } else if (idNa >= jumNa) {
                cout << uang << endl;
                break;
            }
            if(naga[idNa]<=ksa[idKs]) {
                uang+=ksa[idKs];
                idNa++;
                idKs++;
            } else idKs++;
        }
    }

    return 0;
}
