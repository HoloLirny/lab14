#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}

void stat(const double A[] ,int N,double B[]){
    double s=0,l=0,g=1,sr=0,max=A[0],min=A[0];
    for(int i=0;i<N;i++){
        s+=A[i];
        l+=(A[i]*A[i]);
        g*=A[i];
        sr+=1/A[i];
        if(max<A[i]) max=A[i];
        if(min>A[i]) min=A[i];

    }
    B[0]=s/N;
    B[1]=sqrt((l/N)-(B[0]*B[0]));
    B[2]=pow(g,1.0/N);
    B[3]=N/sr;
    B[4]=max;
    B[5]=min;
}
