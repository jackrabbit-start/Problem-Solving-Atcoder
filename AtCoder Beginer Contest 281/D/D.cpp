#include<stdio.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int K, N, D;
int arr[201] = {0,};
int ans = 0;
int dp[201][201] = {0,};

int main(){
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    int ans = -1;
    cin >> N >> K >> D;
    for(int i = 0 ; i < N ; i++){
      cin >> arr[i];
    }
    sort(arr, arr+N);
    for(int i = 0 ; i < K ; i++){
        for(int j = 0 ; j < N; j++){
            dp[j][i] = 
        }
    }

    

    return 0;
}