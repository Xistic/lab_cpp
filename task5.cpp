#include <iostream>

using namespace std;
//Функция для нахождения значения по степени числа
long int sqrt (int a,int b){
    int result=1;
    for (int i=0; i<b; i++){result*=a;}
    return result;
}
//Функция для рассчёта факториала
long int fact (int f){
    int result=1;
    for (int i = 1; i <=f; i++){result*=i;}
    return result;
}

int main(){
    int x,z;
    cout<<"Введите значение x:";
    cin>>x;
    z=1-(sqrt(x,2)/fact(2))+(sqrt(x,4)/fact(4))+(sqrt(x,6)/fact(6)); //формула из задания
    cout<<"Значение z:"<<z<<"\n";
}