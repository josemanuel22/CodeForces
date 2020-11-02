#include <iostream>
#include <cmath>
using namespace std;

#define dist(x,y,z) abs(x-y) + abs(x-z) + abs(y-z)
#define max(x,y,z)  (x-y) > 0 ? ((x-z) > 0  ? 1 : 3 ) : (y-z) > 0 ? 2 : 3
#define min(x,y,z)  (x-y) < 0 ? ((x-z) < 0  ? 1 : 3 ) : (y-z) < 0 ? 2 : 3

int main(){
    int friend1, friend2, friend3;
    int n;

    cin>>n;
    int res[n];
    for (int i=0; i<n;i++) {
        cin>>friend1>>friend2>>friend3;
        int max =  max(friend1, friend2, friend3);
        int min =  min(friend1, friend2, friend3);
        if ((friend1 == friend2) && (friend2 == friend3)) {
            res[i]=0;
            continue;
        }
        if ( min == 1 ) {
            if ( max == 3 ) {
                if ( friend2 - friend1 > 1 ) {
                    friend1++;
                    friend2--;
                    friend3--;
                } else if ( friend2 - friend1 == 1 && friend3 - friend2 > 0 ) {
                    friend1++;
                    friend3--;
                } else if (friend3 - friend2 > 1) {
                    friend1++;
                    friend2++;
                    friend3--;
                } else if (friend3 - friend2 > 0) {
                    friend1++;
                    friend2++;
                } else if (friend3 - friend2 == 0) {
                    friend1++;
                }
            } else {
                if ( friend3 - friend1 > 1 ) {
                    friend1++;
                    friend3--;
                    friend2--;
                } else if ( friend3 - friend1 == 1 && friend2 - friend3 > 0 ) {
                    friend1++;
                    friend2--;
                } else if (friend2 - friend3 > 1) {
                    friend1++;
                    friend2--;
                    friend3++;
                } else if (friend2 - friend3 > 0) {
                    friend1++;
                    friend3++;
                } else if (friend2 - friend3 == 0) {
                    friend1++;
                }
            }
        } else if ( min == 2 ) {
            if ( max == 1 ) {
                if ( friend3 - friend2 > 1 ) {
                    friend2++;
                    friend3--;
                    friend1--;
                } else if (friend3 - friend2 == 1 && friend1 - friend3 > 0) {
                    friend1--;
                    friend2++;
                } else if (friend1 - friend3 > 1) {
                    friend1--;
                    friend2++;
                    friend3++;
                } else if (friend1 - friend3 > 0) {
                    friend2++;
                    friend3++;
                } else if (friend1 - friend3 == 0) {
                    friend2++;
                }
            } else {
               if ( friend1 - friend2 > 1  ) {
                    friend2++;//
                    friend1--;
                    friend3--;
                } else if ( friend1 - friend2 == 1 && friend3 - friend1 > 0 ) {
                    friend2++;
                    friend3--;
                } else if (friend3 - friend1 > 1) {
                    friend1++;
                    friend2++;
                    friend3--;
                } else if (friend3 - friend1 > 0){
                    friend1++;
                    friend2++;
                } else if (friend3 - friend1 == 0) {
                    friend2++;
                }
            }
        } else {
            if ( max == 1 ) {
                if ( friend2 - friend3 > 1 ) {
                    friend3++;
                    friend2--;
                    friend1--;
                } else if (friend2 - friend3 == 1 && friend1 - friend2 > 0) {
                    friend3++;
                    friend1--;
                } else if (friend1 - friend2 > 1) {
                    friend1--;
                    friend2++;
                    friend3++;
                } else if (friend1 - friend2 > 0){
                    friend2++;
                    friend3++;
                } else if (friend1 - friend2 == 0) {
                    friend3++;
                }
            } else {
               if ( friend1 - friend3 > 1 ) {
                    friend3++;
                    friend1--;
                    friend2--;
                } else if ( friend1 - friend3 == 1 && friend2 - friend1 > 0 ) {
                    friend3++;
                    friend2--;
                } else if (friend2 - friend1 > 1) {
                    friend1++;
                    friend2--;
                    friend3++;
                } else if (friend2 - friend1 > 0){
                    friend1++;
                    friend3++;
                } else if (friend2 - friend1 == 0) {
                    friend3++;
                }
            }
        }
        res[i]=dist(friend1, friend2, friend3);
    }

    for (int i =0 ; i<n; i++) {
        cout<<res[i]<<endl;
    }
}





