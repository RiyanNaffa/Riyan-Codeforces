#include <iostream>
using namespace std;

int sum = 0, num, layer=0;
bool cek = true;

int main(){
    cin >> num;
    while(cek){
        layer++;
        sum += (layer*(layer+1)/2);
        //cout << sum<< endl;
        if(sum>num){
            layer--;
            cek = false;
        }
    }
    cout << layer;
    return 0;
}
