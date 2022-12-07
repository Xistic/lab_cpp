#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    size_t arraySize;
    cout<<"Введите размер массива:";
    cin>>arraySize;
    int **array = new int *[arraySize];
    for(size_t i=0; i<arraySize; i++)
        array[i] = new int [arraySize];
    cout<<"\nМатрица:\n";
    for(size_t i=0; i<arraySize; i++){
        for(size_t j=0; j<arraySize; j++)
            cout<<setw(5)<<(array[i][j] = rand()%20 - 5);
        cout<<"\n";
    }
    int Max = array[0][0],Min = array[0][0];
    size_t RowMax(0),ColumnMin(0);
    for(size_t i=0; i<arraySize; i++)
        for(size_t j=0; j<arraySize; j++)
        {
            if(Max<array[i][j])
            {
                Max = array[i][j];
                RowMax = i;
            }
            if(Min>array[i][j])
            {
                Min = array[i][j];
                ColumnMin = j;
            }
        }
    for(size_t i=0; i<arraySize; i++)
        for(size_t j=0; j<arraySize; j++)
            swap(array[RowMax][j],array[i][ColumnMin]);
    cout<<"\nНовая матрица:\n";
    for(size_t i=0; i<arraySize; i++)
    {
        for(size_t j=0; j<arraySize; j++)
            cout<<setw(5)<<array[i][j];
        cout<<"\n";
    }
    cout<<"\nМаксимальный: "<<Max<<"\n";
    cout<<"Минимальный: "<<Min;
}