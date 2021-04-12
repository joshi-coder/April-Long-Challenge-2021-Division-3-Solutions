#include<bits/stdc++.h>
using namespace std;

//Bharat Joshi
int main()
{
long int test,n;
cin>>test;
while(test--)
{
 cin>>n;  
 if(n==1) cout<<20<<"\n";
 else  if(n==2) cout<<36<<"\n";
 else if(n==3) cout<<51<<"\n";
 else if(n>=4)
 {
      if(n%4==0)  cout<<44*(n/4)+16<<"\n";
      else if(n%4==3) cout<< 44*(n/4)+55<<"\n";
      else if(n%4==2) cout<<44*(n/4)+44<<"\n";
      else if(n%4==1) cout<<44*(n/4)+32<<"\n";
 }
 }
    return 0;
}