#include<iostream>
#include<cmath>
using namespace std;

int main(){

int p;
float i;
int t;
char c;

cout<<"Enter Principal Amount."<<endl;
cin>>p;

cout<<"Enter Interest Rate."<<endl;
cin>>i;

cout<<"Enter Term period."<<endl;
cin>>t;

int si = ((p*i*t)/100);

cout<<endl<<endl<<si<<endl<<endl;

cout<<"Your interest gained after ";
cout<<t<<" years, on a principal amount of ";
cout<<p<<" on an interest rate of "<<i;
cout<<" would be"<<endl<<endl;
cout<<si<<endl<<endl;
cout<<"Would you be interested in auto-renewing your deposit after the term period of ";
cout<<t<<" years?"<<endl<<endl;
cin>>c;


return 0;
}
// cin>> is used to take input from user.
