#include<stdio.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;

vector <long long int> v;


long long int N, M, K;
long long int arr[200005] = {0,};
long long int ans[200005];
long long int tmp[200005];

int main(){
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    cin >> N >> M >> K;
    for(long long int i = 1 ; i <= N ; i++){
        long long int a;
        cin >> a;
        v.push_back(a);
    }
    long long int sum = 0;
    copy(arr+1, arr+ M+1, ans);
    sort(ans, ans+M);
    for(long long int j = 0 ; j < K ; j++){
            v.push_back(ans[j]);
            sum += ans[j];
    }





   /*
    copy(arr+1, arr+ M+1, ans);
    sort(ans, ans+M);
    for(long long int j = 0 ; j < K ; j++){
            v.push_back(ans[j]);
            sum += ans[j];
    }
    for(int i = 0 ; i < (N-M+1); i++){
        sort(v.begin(),v.end());
        auto iter = find(v.begin(),v.end(), arr[i-1]);
        if(iter != v.end()){
            v.erase(iter);
        }
    }

    
    for(long long int i = 0 ; i < (N-M+1); i++){
        long long int sum = 0;
        copy(arr + i, arr + i + M, ans);
        sort(ans, ans+M);
        for(long long int j = 0 ; j < K ; j++){
            sum += ans[j];
        }
        cout << sum << " ";
    }*/
    return 0;
}