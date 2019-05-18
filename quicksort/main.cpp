#include <iostream>
#include <stdio.h>
#include<vector>
#include "functs.h"
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#ifndef CATCH_CONFIG_MAIN
using namespace std;



int main()
{
    float arr[4]={3,4.6,7.5,9};
    quickSort(arr,0,3 );
    for (int i=0;i<4;i++)
        cout<<arr[i]<<endl;

    vector<float> a={1.6,2.4,6.0,0.0};

    quickSort(a,0,4);

    for (int i=0;i<4;i++)
        cout<<a[i]<<endl;

    return 0;
}


#endif