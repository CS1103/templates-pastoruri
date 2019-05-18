#include "catch.hpp"
#include "functs.h"
#include <vector>

using namespace std;
SCENARIO("Test con array[n] de int "){
    GIVEN("int arr[4]={2,3,4,1}, deberia reordenarse a arr[4]={1,2,3,4}, ENTONCES arr[0]==1 && arr[3]==4"){
        int arr[4]={2,3,4,1};
        quickSort(arr,0,4);

        REQUIRE(arr[3]>arr[2]);
    }
}

SCENARIO("Test con vector<float> vec"){
    GIVEN("vector<float> vec={9.1,2.4,5.2,0.8}, deberia reordenarse a vec={0.8,2.4,5.2,9.1}, ENTONCES vec[0]==0.8 && vec[3]==9.1"){
        vector<float> vec={9.1,2.4,5.2,0.8};
        quickSort(vec,0,4);


        REQUIRE(vec[0]<vec[1]);
    }
}