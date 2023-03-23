#include <iostream>
using namespace std;
void displayArray(int array[], int size);
void getArrayInput(int array[], int size, int i);
int sumOfArray(int array[], int size);
main()
{
    int numberOfRows, numberOfColumns;
    cout << "Enter number of rows: ";
    cin >> numberOfRows;
    cout << "Enter number of columns: ";
    cin >> numberOfColumns;
    int array[numberOfRows][numberOfColumns];
    for (int i = 0; i < numberOfRows; i++)
    {
        getArrayInput(array[i], numberOfColumns, i);
    }
    //.......................................................................
    for (int i = 0; i < numberOfRows; i++)
    {
        displayArray(array[i], numberOfColumns);
        cout << endl;
    }
    //...................................................................................
    int sum = 0;
    for (int i = 0; i < numberOfRows; i++)
    {
        sum += sumOfArray(array[i], numberOfColumns);
    }
    cout << sum << endl;
    //.............................................................................
    int rowWiseSum[numberOfRows];
    for (int i = 0; i < numberOfRows; i++)
    {
        rowWiseSum[i] = 0;
    }
    for (int i = 0; i < numberOfRows; i++)
    {
        rowWiseSum[i] += sumOfArray(array[i], numberOfColumns);
    }
    for (int i = 0; i < numberOfRows; i++)
    {
        cout << rowWiseSum[i] << " ";
    }
    cout << endl;
    //................................................................................
    int transposeArray[numberOfColumns][numberOfRows];
    for (int i = 0; i < numberOfRows; i++)
    {
        for (int j = 0; j < numberOfColumns; j++)
        {
            transposeArray[j][i] = array[i][j];
        }
    }
    for (int j = 0; j < numberOfColumns; j++)
    {
        for (int i = 0; i < numberOfRows; i++)
        {
            cout << transposeArray[j][i] << " ";
        }
        cout << endl;
    }
    //.........................................................................
    int columnWiseSum[numberOfColumns];
    for (int i = 0; i < numberOfColumns; i++)
    {
        columnWiseSum[i] = 0;
    }
    for (int i = 0; i < numberOfColumns; i++)
    {
        columnWiseSum[i] += sumOfArray(transposeArray[i], numberOfRows);
    }
    for (int i = 0; i < numberOfColumns; i++)
    {
        cout << columnWiseSum[i] << " ";
    }
    cout << endl;
    //.........................................................................
    
    
}
void getArrayInput(int array[], int size, int i)
{
    for (int j = 0; j < size; j++)
    {
        cout << "Enter index [" << i << "][" << j << "]: ";
        cin >> array[j]; 
    }
}
void displayArray(int array[], int size)
{
    for (int j = 0; j < size; j++)
    {
        cout << array[j] << " "; 
    }
}
int sumOfArray(int array[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum += array[i];
    }
    return sum;
}