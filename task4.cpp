#include <iostream>
using namespace std;
void getArray(int array[], int size, int i);
void displayElements(int array[], int size, int i);
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
    for (int i = 0; i < dimension; i++)
    {
        displayElements(array[i], dimension, i);
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
void displayElements(int array[], int size, int i)
{
    for (int j = 0; j < i; j++)
    {
        cout << "  ";
    }
    for (int j = i; j < size; j++)
    {
        cout << array[j] << " ";
    }
}