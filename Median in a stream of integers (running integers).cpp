// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    // Write C++ code here
    int a[12] = { 5, 15, 1, 3, 2, 8, 7, 9, 10, 6, 11, 4 };
    int n;
    vector<int> vec;
    for(int i=0;i<12;i++){
        vec.push_back(a[i]);
        sort(vec.begin(),vec.end());
        n=vec.size();
        if (n % 2 != 0)
            cout<<ceil(vec[n / 2])<<endl;
        else{
           cout<<ceil((vec[(n - 1) / 2] + vec[n / 2]) / 2)<<endl;
        }
    }
 return 0;       
}
