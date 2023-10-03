#include <iostream>
#include <algorithm>
using namespace std;

int kel[10001],n,m,q;

int bin(int l, int r){
    if(l==r) {
        if(kel[l]==q){
            return l;
        }else return -1;
    }
    else if(l+1==r) {
        if(kel[l]==q){
            while(kel[l-1]==q){
                l--;
            }
            return l;
        }
        else if(kel[r]==q){
            while(kel[r-1]==q){
                r--;
            }
            return r;
        }
        else return -1;
    } else{
        int mid = (l+r) >> 1;
        if(kel[mid]==q){
            while(kel[mid-1]==q){
                mid--;
            }
            return mid;
        } else if(kel[mid]>q) r=mid-1; else l=mid+1;
    }
}

int main(){
    while(true){
        int tc = 0;
        cin >> n >> m;
        if(n==0 && m==0) break;
        tc++;
        for(int i = 1; i<=n; i++)cin >> kel[i];
        sort(kel, kel+n);

        for(int i = 1; i<=m; i++) {
            cin >> q;
            cout << "CASE# " << tc << ":" << endl;
            int lokasi = bin(1,n);
            if(lokasi==-1) cout << q << " not found" << endl;
            else cout << q << " found at " << lokasi+1 << endl;
        }
    }
    return 0;
}
