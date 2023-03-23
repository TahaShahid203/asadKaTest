#include <iostream>
using namespace std;
void getArray(int array[], int size, int i);
void sumArrays(int array1[], int array2[], int array3[], int size);
main()
{
    int numberOfRows, numberOfColumns;
    cout << "Enter number of rows for both vectors: ";
    cin >> numberOfRows;
    cout << "Enter number of columns for both vectors: ";
    cin >> numberOfColumns;
    int array1[numberOfRows][numberOfColumns];
    int array2[numberOfRows][numberOfColumns];
    int array3[numberOfRows][numberOfColumns];
    
    for (int i = 0; i < numberOfRows; i++)
    {
        getArray(array1[i], numberOfColumns, i);
    }
    
    for (int i = 0; i < numberOfRows; i++)
    {
        getArray(array2[i], numberOfColumns, i);
    }
    //.....................................................................
    for (int i = 0; i < numberOfRows; i++)
    {
        sumArrays(array1[i], array2[i], array3[i], numberOfColumns);
    }
    for (int i = 0; i < numberOfRows; i++)
    {
        for (int j = 0; j < numberOfColumns; j++)
        {
            cout << array3[i][j] << " ";
        }
        cout << endl;
    }
    
}
void getArray(int array[], int size, int i)
{
    for (int j = 0; j < size; j++)
    {
        cout << "Enter index [" << i << "][" << j << "]: ";
        cin >> array[j];
    }
}
void sumArrays(int array1[], int array2[], int array3[], int size)
{
    for (int i = 0 ; i < size; i++)
    {
        array3[i] = array1[i] + array2[i];
    }
}