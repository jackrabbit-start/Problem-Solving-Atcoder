#include<stdio.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int N, M;
int arr[300][300];
int answer;
int main(){
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    answer = 0;
    cin >> N >> M;
    int ans = 0;
    for(int i = 0 ; i < N ; i++){
        for(int j = 0 ; j < M ; j++){
            cin >> arr[i][j];
        }
    }
    for(int i = 0 ; i < N; i++){
        for(int k = 0 ; k < N ; k++){
            ans = 0;
            if(i != k){
                for(int j = 0 ; j < M ; j++){
                    if(arr[i][j] == 'o' || arr[k][j] == 'o'){
                        ans++;
                    }
                }
                if(ans == M) answer++;
            }
        }
    }
    cout << answer << "\n";

    return 0;
}