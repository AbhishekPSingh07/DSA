#include <stdio.h>
using namespace std;
#include <vector>
vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n){
    vector<int> result(m+n);
    int i =0,j = 0,k=0;
    while(i < m && j<n){
        if(arr1[i] < arr2[j]){
            result[k++] = arr1[i++];
        }else{
            result[k++] = arr2[j++];
        }
    }
    while(i<m){
        result[k++] = arr1[i++];
    }
    while(j<n){
        result[k++] = arr2[j++];
    }
    return result;
}