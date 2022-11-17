#include <iostream>
using namespace std;
int main() {   
    int a,i,j,summ=0;
    int arr[10];
    int max=0,min=1000;
    cout << "Введите 10 чисел: \n";
//========Цикл для ввода массива=================
    for(a = 0; a < 10; a ++){cin >> arr[a];}  
//========Цикл для поиска max и min числа========
    for (a = 0; a<10; a++)
    {
        if (arr[a]<min)
        {min=arr[a];}
        else if ((arr[a]>max))
        {max=arr[a];}
    }

    cout<<max<<" :MAX ";
    cout<<min<<" :MIN ";
//========Цикл для подсчёта суммы последовательности========       
    // for(i = 0; i < 10; i ++){
    //     if (arr[i]>=min || arr[i]<=max){
    //         summ+=arr[i];
    //     }
    // }  
//=========================================================
    // for(i = 0; i <=10; i ++){
    //     for(j = 0; j+1 <=10; j ++){
    //         if (arr[i]==arr[j]){
    //             break;
    //         }
    //         else{
    //             summ+=arr[i];
    //         }
    //         break;
    //     }
    // }     
//=========================================================
    //  for (int i = min; i < max; i++) {
    //     summ+=arr[i];
    // } 
    cout<<"\n"<<summ;
}