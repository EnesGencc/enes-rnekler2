#include <iostream>
using namespace std;
int main(){

string s;
char h;

int t=0;

cout<<"string e"<<endl;
getline(cin, s);
cout<<"harf e"<<endl;
cin>>h;

for (int i = 0; i < s.length(); i++)
{
    char ara=s[i];

    if (ara==h)
    {
        t++;
    }
    
    
}
cout<<t;

    return 0;
}