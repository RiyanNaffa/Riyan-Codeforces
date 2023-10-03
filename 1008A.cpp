#include<iostream>
#include<vector>
using namespace std;

string berlan;
vector<char> vowel;


int main(){
    cin >> berlan;
    berlan = berlan + 'n';
    for(int i = 0; i<(berlan.size()); i++){
        if(berlan[i] != 'a')
            if(berlan[i+1] != 'a') cout << "NO" << endl;
    }
    return 0;
}