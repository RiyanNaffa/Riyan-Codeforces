#include <iostream>
using namespace std;

int main() {
	unsigned short int jmlSdr;
	int nomor[501], testcase, distMin = 50000, distMax = 0;
	cin >> testcase;
	for(int i = 0; i < testcase; i++){
		cin >> jmlSdr;
		for(int j = 0; j < jmlSdr; j++){
			cin >> nomor[j];
			if(nomor[j] < distMin) distMin = nomor[j];
			if(nomor[j] > distMax) distMax = nomor[j];
		}
			int totalMin = 15000000;					// nyari pake range bawah ini
			for(int k = distMin; k <= distMax; k++){
				int temp = 0;
				for(int l = 0; l < jmlSdr; l++){
					temp += (abs(k - nomor[l]));
				}
				if(temp < totalMin) totalMin = temp;
			}
			cout << totalMin << endl;
	}

	return 0;
}
