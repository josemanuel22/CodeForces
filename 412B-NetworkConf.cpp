#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#include <string>
#include <sstream>

using namespace std;

int main() {
    int n,k;

    cin>>n>>k;

    string str;

    cin.ignore();
    getline(cin, str);

    stringstream ss1(str);
    auto start = istream_iterator<int>(ss1);
    auto end = istream_iterator<int>();
    vector<int> bandWitdhs(start, end);
    sort(bandWitdhs.begin(), bandWitdhs.end());

    cout<<bandWitdhs[n-k];
}
