#include<stdio.h>
using namespace std;
#include<vector>

const int MOD =  1000000007;
int fibbonacciNumber(int n){
    vector<int> fib(n+1);
    fib[0] = 0;
    fib[1] = 1;
    for(int i = 1; i <= n; i++){
        fib[i]= (fib[i-1] + fib[i])% MOD;
    }
    return fib[n];
}