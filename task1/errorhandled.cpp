#include <iostream>
#include <cmath>
using namespace std;

struct points{
    float x;
    float y;
};

int main(){
    points p[2];
    float u,v,a;

    cout<<"enter the origin coordinates "<<endl;
    cin>>p[0].x>>p[0].y;

    cout<<"enter the destination coordinates "<<endl;
    cin>>p[1].x>>p[1].y;

    float dist = sqrt(pow(p[1].x-p[0].x,2) + pow(p[1].y-p[0].y,2));
    cout<<"Distance to Destination="<<dist<<endl;

    cout<<"enter the initial velocity of rover"<<endl;
    cin>>u;

    cout<<"enter the maximum velocity of rover"<<endl;
    cin>>v;

    cout<<"enter the acceleration of rover"<<endl;
    cin>>a;

    if(a<=0 || v<u || dist<0){
        cout<<"Invalid input"<<endl;
        return 0;
    }

    float t=(v-u)/a;
    float s=u*t+(a*t*t)/2;

    if(s>=dist){
        cout<<"Time required="<<t<<" seconds"<<endl;
    }
    else{
        float t_new=t+(dist-s)/v;
        cout<<"Time required="<<t_new<<" seconds"<<endl;
    }

    return 0;
}