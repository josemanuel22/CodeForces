#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <string>
#include <cstring>
#include <sstream>

using namespace std;

int main() {
    int n;

    cin>>n;

    bool res[n];
    memset(res, true, sizeof(bool) * n);

    for(int i = 0; i<n; i++) {

        int l, x;

        cin>>l>>x;

        string str1;

        cin.ignore();
        getline(cin, str1);

        stringstream ss1(str1);
        auto start_array_a = istream_iterator<int>(ss1);
        auto end_array_a = istream_iterator<int>();
        vector<int> array_a(start_array_a, end_array_a);

        string str2;
        getline(cin, str2);

        stringstream ss2(str2);
        auto start_array_b = istream_iterator<int>(ss2);
        auto end_array_b = istream_iterator<int>();
        vector<int> array_b(start_array_b, end_array_b);

        for(int j=0; j<l; j++) {
            if( array_a[j]+ array_b[l-j-1] > x) {
                res[i]=false;
                break;
            }
        }
        cin.ignore();
    }

    for( int i=0; i<n ; i++) {
        if(res[i]==false) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}

