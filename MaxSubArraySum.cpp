#include <stdio.h>
#include <climits>
using namespace std;
long long maxSubarraySum(int arr[], int n)
{
    long max = 0;
    long maxNow = INT_MIN;

    for(int i =0;i<n;i++){
        max += arr[i];
        if(max < 0){
            max = 0;
        }
        if(max>maxNow){
            maxNow = max;
        }
        
    }

    return maxNow;
    
}