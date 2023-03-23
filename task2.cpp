#include <iostream>
using namespace std;
void getArray(int array[], int size, int i);
int leftDiagonalSum(int array[], int size, int i);
int rightDiagonalSum(int array[], int size, int i);
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
    int sumLeftDiagonal = 0;
    for (int i = 0; i < dimension; i++)
    {
        sumLeftDiagonal += leftDiagonalSum(array[i], dimension, i);
    }
    cout << "Sum of Left diagonal: " << sumLeftDiagonal << endl;
    int sumRightDiagonal = 0;
    for (int i = 0; i < dimension; i++)
    {
        sumRightDiagonal += rightDiagonalSum(array[i], dimension, i);
    }
    cout << "Sum of Left diagonal: " << sumLeftDiagonal << endl;
}
void getArray(int array[], int size, int i)
{
    for (int j = 0; j < size; j++)
    {
        cout << "Enter index [" << i << "][" << j << "]: ";
        cin >> array[j];
    }
}
int leftDiagonalSum(int array[], int size, int i)
{
    return array[i];
}
int rightDiagonalSum(int array[], int size, int i)
{
    return array[size - i - 1];
}