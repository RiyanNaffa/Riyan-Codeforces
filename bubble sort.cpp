#include <iostream>
using namespace std;

int table[] = {10,9,8,7,6,5,4,3,2,1,0};
int temp, n = sizeof(table)/sizeof(int);
int process = 0;

// hah

int main(){
    cout << "INITIAL ARRAY :\t";
    for(int i = 0; i<n; i++) cout << table[i] << " ";
    cout << endl;
    while(true){
        bool isSwap = false;
        for(int i = 0; i<n-1; i++){
            cout << "Iteration #" << i+1 << "\n";
            if(table[i]>table[i+1]){
                temp = table[i];
                table[i] = table[i+1];
                table[i+1] = temp;
                isSwap = true;
                process++;
            }
            for(int j = 0; j<n; j++) cout << table[j] << " ";
            cout << "\n";
            process++;
        }
        if(isSwap == false) break;
    }
    cout << "SORTED ARRAY : \t";
    for(int i = 0; i<n; i++) cout << table[i] << " ";
    cout << endl << "COMPLEXITY : \t" << process << endl;

    return 0;
}
