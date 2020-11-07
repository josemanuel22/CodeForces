#include <iostream>
#include <iterator>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    int n;
    string str;

    cin>>n;

    cin.ignore();
    getline(cin, str);

    stringstream ss(str);
    auto start = istream_iterator<int>(ss);
    auto end= istream_iterator<int>();
    vector<int> array(start, end);
    sort(array.begin(),array.end());

    vector<int> arrayZsorted;
    for(int i=0; i < n; i++) {
        if ( (n-i > i) && array[n-i-1] <= array[i] ) {
            cout<<"Impossible";
            return 0;
        }
        arrayZsorted.push_back(array[i]);
        arrayZsorted.push_back(array[n-i-1]);
    }
    for(int i=0; i<n-1; i++) {
        cout<<arrayZsorted[i]<<" ";
    }
    cout<<arrayZsorted[n-1]<<endl;
}
