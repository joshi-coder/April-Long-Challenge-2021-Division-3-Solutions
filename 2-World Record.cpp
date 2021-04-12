#include <iostream>
#include <iomanip>
#include <sstream>
#include <string>
#include<bits/stdc++.h>
//Bharat Joshi
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    float a,b,c,v;
	    float ti = 9.58;
	    cin>>a>>b>>c>>v;
	    float t1 = a*b*c*v;
	    t1 = 100/t1;
	    t1 = (int)(t1*100+.5);
	    t1 = t1/100;
	    if (t1<ti)
	       {cout<<"yes"<<endl;}
	       else
	       {
	           cout<<"no"<<endl;
	       }
    }
    return 0;
}
