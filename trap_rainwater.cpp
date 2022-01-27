/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
   int l[n];
   l[0]=a[0];
   for(int i=1;i<n;i++){
       l[i]=max(l[i-1],a[i]);
   }
   int r[n];
   r[n-1]=a[n-1];
   for(int j=n-2;j>=0;j--){
       r[j]=max(r[j+1],a[j]);
   }
   int sum=0;
   for(int i=0;i<n;i++){
       sum+=min(l[i],r[i])-a[i];
   }
   cout<<endl;
   cout<<sum;
    return 0;
}
