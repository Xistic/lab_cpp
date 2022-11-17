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
    int x,y;
    cout<<"Введите значение x:";
    cin>>x;
    y=x+(sqrt(x,3)/fact(3))+(sqrt(x,5)/fact(5))+(sqrt(x,7)/fact(7)); //формула из задания
    cout<<"Значение y:"<<y<<"\n";
}