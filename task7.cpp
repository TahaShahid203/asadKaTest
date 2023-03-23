#include <iostream>
using namespace std;
void getArray(int array[], int size, int i);
void multiplyArrays(int array1[], int array2[], int array3[], int size, int j);
main()
{
    int numberOfRowsForFirst, numberOfColumnsForFirst, numberOfColumnsForSecond;
    cout << "Enter number of rows for first vector: ";
    cin >> numberOfRowsForFirst;
    cout << "Enter number of columns for first vector and number of rows for second: ";
    cin >> numberOfColumnsForFirst;
    cout << "Enter number of columns for second: ";
    cin >> numberOfColumnsForSecond;

    int array1[numberOfRowsForFirst][numberOfColumnsForFirst];
    int array2[numberOfColumnsForFirst][numberOfColumnsForSecond];
    int array3[numberOfRowsForFirst][numberOfColumnsForSecond];
    int transposeArray2[numberOfColumnsForSecond][numberOfColumnsForFirst];

    for (int i = 0; i < numberOfRowsForFirst; i++)
    {
        getArray(array1[i], numberOfColumnsForFirst, i);
    }

    for (int i = 0; i < numberOfColumnsForFirst; i++)
    {
        getArray(array2[i], numberOfColumnsForSecond, i);
    }
    for (int i = 0; i < numberOfColumnsForSecond; i++)
    {
        for (int j = 0; j < numberOfColumnsForFirst; j++)
        {
            transposeArray2[i][j] = array2[j][i];
        }
    }
    
    //.....................................................................
    for (int i = 0; i < numberOfRowsForFirst; i++)
    {
        for (int j = 0; j < numberOfColumnsForSecond; j++)
        {
            multiplyArrays(array1[i], transposeArray2[j], array3[i], numberOfColumnsForSecond, j);
        }
    }
    for (int i = 0; i < numberOfRowsForFirst; i++)
    {
        for (int j = 0; j < numberOfColumnsForSecond; j++)
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
void multiplyArrays(int array1[], int array2[], int array3[], int size, int j)
{
    array3[j] = 0;
    for (int i = 0; i < size; i++)
    {
        array3[j] += array1[i]*array2[i];
    }
}
