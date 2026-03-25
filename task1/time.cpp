#include <iostream>
#include<cmath>
using namespace std;
struct points{
    float x;
    float y;
};
 int main(){
    points p[2];
     float u,v,a;
     cout<< "enter the origin coordinates "<<endl;
     cin>>p[1].x>>p[1].y;
     cout<< "enter the destination coordinates "<<endl;
     cin>>p[2].x>>p[2].y;
   
     float dist = sqrt(pow(p[2].x-p[1].x,2) + pow(p[2].y-p[1].y,2));
     cout<<"Distance to Destination="<< dist<<endl;


     cout << " enter the initial velocity of rover"<<endl;
     cin>>u;
     cout << "enter the maximum velocity of rover"<<endl;
     cin>> v;
     cout << "enter the acceleration of rover"<<endl;
     cin >>a;
     float t=(v-u)/a;
     float s = u*t+(a*t*t)/2;

     if(s>=dist){
        cout<< "time="<<t<<endl;
     }
     else {
        float t_new=t+(dist-s)/v;
        cout<< "time="<<t_new<<endl;
     }

     return 0;


 }