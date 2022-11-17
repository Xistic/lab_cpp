#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int n,k;//Объявление переменных на кол-во элементов и уровень сдвига
    cout<<"Введите кол-во элементов массива:";
    cin>>n; 
    int arr[n];
    for (int i=0; i<n; i++){//Внесение значений в массив
        cout<<"Введите "<<i<<" элемент: ";
        cin>>arr[i];
    }
    for (int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
    cout<<"\nВведите значение сдвига массива: ";
    cin>>k;

    for(int i=0; i<k; k++){ //цикл в длину сдвига
        int t; 
        t = arr[n-1]; //Сохранение значения последнего индекса
        for (int i = n-2; i>=0; i--){ //Цикл для переноса значений
            arr[i+1] = arr[i];
            }
        arr[0] = t; //После переноса arr[0] на arr[1], переносим сохранённое значение последнего индекса на arr[0]
        }
    for (int i=0; i<n; i++){ //Вывод итогового массива
         cout << arr[i] << " \n";
    }
}