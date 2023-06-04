#include <iostream>
#include <string>
using namespace std;
int main(){

    string s1("aa");
    string s2("bb");
    string s3(s1);
    
    if (s1!=s2)
    {
        cout<<"theyre different"<<endl;
    }
    else{
        cout<<"no";
    }
    

    return 0;
    }