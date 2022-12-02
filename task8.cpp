#include <iostream>
using namespace std;
 
int main() 
{
      int n;
      int arr[n]; 
      cout<< "Введите количество элементов: ";
      cin >> n;
      
      for (int i = 0; i < n; i++){
            arr[i] = rand () % 20; 
            cout<< arr[i]<< " ";
      }
  
      int max = 0;
      int i = 0;
      int len = 0;
 
      while (i != n)
      {
               if ((arr[i] > arr[i+1] && arr[i] > arr[i-1]) || (arr[i] < arr[i+1] && arr[i] < arr[i-1])){
                  max++;
                  if(len < max){len = max;}
                  i++;
               }
               else {m=0;i++;}
      }
      cout << "Длина самой длинной подпоследовательности: " << len;
}