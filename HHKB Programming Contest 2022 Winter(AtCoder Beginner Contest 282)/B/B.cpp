#include<stdio.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int N, M;
string arr[300];
int answer;

int main(){
char c;

    answer = 0;
    scanf("%d %d", &N, &M);
    int ans = 0;
    for(int i = 0 ; i < N ; i++){
        cin >> arr[i];
    }
    for(int i = 0 ; i < N; i++){
        for(int k = i+1 ; k < N ; k++){
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
    printf("%d\n",answer);

    return 0;
}