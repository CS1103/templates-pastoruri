#include <iostream>
#include <stdio.h>
#include<vector>

using namespace std;

template <typename T>
void quickSort(T arr[], int left,int right) {
    int i = left, j = right;
    T tmp;
    T pivot = arr[(left + right) / 2];

    while (i <= j) {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;

        if (i <= j) {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        }
    };

    if (left < j)
        quickSort(arr, left, j);
    if (i < right)
        quickSort(arr, i, right);

}

template <typename T1>
void quickSort(vector<T1> &arr, int left,int right) {
    int i = left, j = right;
    T1 tmp;
    T1 pivot = arr[(left + right) / 2];

    while (i <= j) {
        while (arr[i] < pivot)
            i++;
        while (arr[j] > pivot)
            j--;

        if (i <= j) {
            tmp = arr[i];
            arr[i] = arr[j];
            arr[j] = tmp;
            i++;
            j--;
        }
    };

    if (left < j)
        quickSort(arr, left, j);
    if (i < right)
        quickSort(arr, i, right);

}


int main()
{
    float arr[4]={3,4.6,7.5,9};
    quickSort(arr,0,3 );
    for (int i=0;i<4;i++)
        cout<<arr[i]<<endl;

    vector<float> a;
    a.push_back(2.3);
    a.push_back(6.9);
    a.push_back(0);
    quickSort(a,0,a.size());

    for (int i=0;i<a.size();i++)
        cout<<a[i]<<endl;

    return 0;
}


