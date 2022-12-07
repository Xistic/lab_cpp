#include <iostream>

using namespace std;
int main()
{
    int N;
    int count = 0;
    cout << "Введите кол-во элементов: ";
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i += 1){
        cout << "Введите " << i << " элемент: ";
        cin >> arr[i];
    }
    for (int i = 0; i < N; i += 1){
        if ((arr[i] != arr[ i - 1 ])){
          count += 1;
        }
    }
    cout << "Количество разных: " << count;
}