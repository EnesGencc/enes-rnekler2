#include<iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main(){

        srand(time(NULL));
    int n=rand()%3+1;
cout<<n<<endl;

switch (n)
{
case 1:
cout<<"u win table"<<endl;
    break;

case 2:
cout<<"u win car"<<endl;
break;

case 3:
cout<<"u win huyuııugtuy"<<endl;
default:
    break;
}
return 0;
}