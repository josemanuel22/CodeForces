#include <iostream>
#include <iterator>
#include <string>
#include <sstream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin>>n;

    int** res = new int*[n];
    for(int i=0, j; i< n; i++) {
        res[i] = new int[3]();
        cin>>j;
        string str;
        cin.ignore();
        getline(cin, str);
        stringstream ss(str);
        auto start = istream_iterator<int>(ss);
        auto end= istream_iterator<int>();
        vector<int> perm(start, end);
        int min_index=0, max_index=0, max=0;
        int min = numeric_limits<int>::max();
        for(int k=0; k<j; k++) {
            if (max>perm[k]) {
                res[i][0]=(min_index+1);res[i][1]=(max_index+1);res[i][2]=(k+1);
                break;
            }
            if (min>perm[k]) {
                min = perm[k];
                min_index = k;
            } else if (perm[k]>min) {
                max_index = k;
                max = perm[k];
            }
        }
    }
    for(int i = 0; i<n; i++) {
        if(res[i][1]==0) {
            cout<<"NO"<<endl;
        } else {
            cout<<"YES"<<endl;
            cout<<res[i][0]<<" "<<res[i][1]<<" "<<res[i][2]<<endl;
        }
    }
    delete[] res;
}

