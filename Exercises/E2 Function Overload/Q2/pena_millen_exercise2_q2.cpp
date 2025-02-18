#include <iostream>

using namespace std;

// Function declarations
float mean(float a, float b, float c);
float mean(float x, float y, float z, float w1, float w2, float w3);
float mean(float g1, float g2, float g3, char g);

int main(){
    cout<<endl;

    float a1=3.4, a2= 5.6, a3=2.7;
    float x1=80, x2=85, x3=75, w1=1, w2=2, w3=3;
    float g1=1.7, g2=1.4, g3=1.5;
    float arithmetic_mean, weighted_mean, geometric_mean;


    arithmetic_mean=mean(a1, a2, a3);
    weighted_mean=mean(x1,x2,x3,w1,w2,w3);
    geometric_mean=mean(g1,g2,g3, 'g');

    cout<<"Arithmetic mean is: "<<arithmetic_mean<<endl;
    cout<<"Weighted mean is: "<<weighted_mean<<endl;
    cout<<"Geometric mean is: "<<geometric_mean<<endl;

    return 0;
}

// Functions
float mean(float a, float b, float c){
    return (a+b+c)/3;
}
float mean(float x, float y, float z, float w1, float w2, float w3){
    return ((w1*x)+(w1*y)+(w2*z)+(w1*90)+(w2*80))/(w1+w1+w2+w3);
}
float mean(float g1, float g2, float g3, char g){
    return (100*g1*g2*g3);
}