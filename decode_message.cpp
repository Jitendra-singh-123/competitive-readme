// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int decimal(string str){
    int power=0;
    int res=0;
   for(int i=str.length()-1;i>=0;i--){
      if(str[i]=='1')
        res+=pow(2,power);
      power++;
   }
   return res;
}
int main() {
    // Write C++ code here
    string str="101010101110001011001111110001101100011011000101";
    int answer;
    int n;
    cin>>n;
    if(n%8!=0)
        cout<<"-1";
    else{
    string str1="";
    for(int i=0;i<8;i++){
        str1+=str[i];
    }
    int intstr1=stoi(str1);
    // cout<<intstr1<<endl;
    int index=8;
    int times=(n-8)/8;
    
    for(int i=0;i<times;i++){
        int next=stoi(str.substr(index,8));
        index+=8;
        // cout<<next<<endl;
        int value1=decimal(to_string(intstr1));
        int value2=decimal(to_string(next));
        answer=value1^value2;
        cout<<(char)answer;
    }
    
    }
    
    return 0;
}
