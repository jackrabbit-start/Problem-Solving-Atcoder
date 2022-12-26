#include<stdio.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int N;
long long int T;
long long int A[100005] = {0,};
long long int total;
int main(){
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    total = 0;
    cin >> N >> T;
    for(int i = 1 ; i <= N ; i++){
        long long int tmp;
        cin >> tmp;
        total += tmp;
        A[i] = total;
    }
    T = T % total;
    for(int i = 1;i <= N ; i++){
        if(T < A[i]){
            long long int ans = A[i];
            cout << i << " " << T-A[i-1] << "\n";
            break;
        }
    }
    

    return 0;
}