#include <iostream>
using namespace std;
int main(){
    int n,m,*b;
    float **a;
    cout<<"n: "; cin>>n;
    cout<<"m: "; cin>>m;
    a=new float*[n];
    b=new int [n];
    for(int i=0;i<n;i++){
        b[i]=0;
        a[i]=new float[m];
        for(int j=0;j<m;j++){
            a[i][j]=rand()%10-5;
        }
    }
    for(int i=0;i<n;i++){
        cout<<endl;
        for(int j=0;j<m;j++)
            cout<<a[i][j]<<" ";
    }
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
          if (a[i][j]<0){
            b[i]+=a[i][j];
            cout<<b[i];
          }
           
}