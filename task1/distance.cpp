#include <iostream>
#include<cmath>
using namespace std;
struct points{
    float x;
    float y;
};
 int main(){
    points p[2];
     cout<< "enter the origin coordinates "<<endl;
     cin>>p[1].x>>p[1].y;
     cout<< "enter the destination coordinates "<<endl;
     cin>>p[2].x>>p[2].y;
   
     float dist = sqrt(pow(p[2].x-p[1].x,2) + pow(p[2].y-p[1].y,2));
     cout<<"distance="<< dist<<endl;
     return 0;

 }