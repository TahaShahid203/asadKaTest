#include <iostream>
using namespace std;
void getArray(int array[], int size, int i);
void displayMiddleRow(int array[], int size);
void displayMiddleColumn(int array[], int size);
main()
{
    int dimension;
    cout << "Enter dimension of square matrix: ";
    cin >> dimension;
    int array[dimension][dimension];
    for (int i = 0; i < dimension; i++)
    {
        getArray(array[i], dimension, i);
    }
    //.....................................................................
    displayMiddleRow(array[(dimension-1)/2], dimension);
    cout << endl;

    //.........................................................................
    for (int i = 0; i < dimension; i++)
    {
        displayMiddleColumn(array[i], dimension);
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
void displayMiddleRow(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << array[i] << " ";
    }
}
void displayMiddleColumn(int array[], int size)
{
    cout << array[(size-1)/2] << " ";
}