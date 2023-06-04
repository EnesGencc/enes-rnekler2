#include <iostream>
using namespace std;
int main(){

int d[3][4]={{1,2,3,4},{5,6,7,8},{9,1,1,1}};

for (int i = 0; i < 3; i++)
{

    for (int j = 0; j < 4; j++)
    {
        cout<<d[i][j];
        
    }
    cout<<endl;
}


    return 0;
}