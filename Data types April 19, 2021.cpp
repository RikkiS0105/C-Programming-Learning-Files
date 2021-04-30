#include<iostream>
#include<cmath>
using namespace std;

int main(){

cout<<"Size of datatype int is "<<sizeof(int)<<endl;
cout<<"Size of datatype short int is "<<sizeof(short int)<<endl;
cout<<"Size of datatype long long int is "<<sizeof(long long int)<<endl;
cout<<"Size of datatype float is "<<sizeof(float)<<endl;
cout<<"Size of datatype double is "<<sizeof(double)<<endl;
cout<<"Size of datatype char is "<<sizeof(char)<<endl;
cout<<"Size of datatype bool is "<<sizeof(bool)<<endl;

int k = 10;
short int l = 100;
long long int m = 1000;
float n = 1.20;
double o = 100.20;
char p = 'x';
bool q = true;


cout<<k<<endl<<l<<endl<<m<<endl<<n<<endl<<o<<endl<<p<<endl<<q<<endl;







return 0;}
//Note that while printing a string directly you have to use double quotes "" with the string inside double quotes such as
//cout<<"Print whatever you want" BUT
//while storing a variable as string or character - you need to only use single quote ' ' such as
//char a = 'x'
//Also, while storing a character as a variable, if the string is more than a few characters long - you get a warning that
//'character constant too long for its type' though the code runs. Don't know what is the maximum character limit to store a
//character variable limit.
//While printing a string directly, if you use single quotes ' ' - the code runs but the output is garbage and gives the same
//warning that 'character constant too long for its type'
