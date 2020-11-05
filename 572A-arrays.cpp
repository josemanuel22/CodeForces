#include <iostream>
#include <iterator>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main() {
    int size_A, size_B;
    int k,m;

    cin>>size_A>>size_B;
    cin>>k>>m;

    string str;

    cin.ignore();
    getline(cin, str);

    stringstream ss1(str);
    auto start = istream_iterator<int>(ss1);
    auto end = istream_iterator<int>();
    vector<int> array_A(start, end);

    getline(cin, str);
    stringstream ss2(str);
    start = istream_iterator<int>(ss2);
    end = istream_iterator<int>();
    vector<int> array_B(start, end);

    if (array_A[k-1]<array_B[size_B-m]) {
        cout<<"YES";
    } else {
        cout<<"NO";
    }
}



