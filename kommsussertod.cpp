#include <iostream>
using namespace std;
int t(int x, int y);
int c(int x, int y);
int ca(int x, int y);
int b(int x, int y);

void bas();

int main(){
int x=2;
int y=3;

bas();
cout<<t(x,y);
cout<<" "<<endl;
cout<<c(x,y);
cout<<" "<<endl;


    return 0;
}

int t(int x, int y){
return x+y;
}
int c(int x, int y){
return x-y;
}
int ca(int x, int y){
    return x*y;
}
int b(int x, int y){
    return x/y;
}
void bas(){
    cout<<"aaaaaa"<<endl;

}