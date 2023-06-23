#include <stdio.h>
#include<vector>
#include <unordered_map>
using namespace std;

pair<int,int> missingAndRepeating(vector<int> &arr, int n){
    int missing  = -1;
    int repeated = -1;
    unordered_map<int,int> map;

    for(int num : arr){
        map[num]++;
    }
    for(int i = 0; i <=n;i++){
        if(map[i] == 0){
            missing = i;
        }
        if(map[i] == 2){
            repeated = i;
        }
    }
    return make_pair(missing, repeated);
}
