#include<iostream>
#include<cmath>
using namespace std;

int main(){

int p;
int i;
int t;

cout<<"Enter Principal Amount."<<endl;
cin>>p;

cout<<"Enter Interest Rate."<<endl;
cin>>i;

cout<<"Enter Term period."<<endl;
cin>>t;

int si = ((p*i*t)/100);


cout<<si;


cout<<endl<<endl<<si;

return 0;
}
