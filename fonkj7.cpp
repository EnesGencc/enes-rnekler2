#include <iostream>
using namespace std;

double ort(double x, double y);
int main(){
int x;
int y;
cin>>x;
cout<<" "<<endl;
cin>>y;
cout<<ort(x,y);

    return 0;
}
double ort(double x, double y){
    return (x+y)/2;
}