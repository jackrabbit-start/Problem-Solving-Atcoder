#include <bits/stdc++.h>
using namespace std;

int H , W;
int arr[1005][1005] = {0,};
int DP[1005][1005] = {0,};
int checking[1005] = {0,};
int main(){
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    cin >> H >> W;
    int ans = 0;
    int tmp = 0;
    int answer = 0;
    for(int i = 1 ; i <= H ; i++){
        for(int j = 1 ; j <= W ; j++){
            cin >> arr[i][j];
        }
        
    }
    for(int j = 1 ; j <= W-1; j++){
        if(arr[1][j] == arr[1][j+1]){
            DP[1][j] = 1;
            DP[1][j+1] = 1;
        }
    }
    for(int j = 1 ; j <= W; j++){
            if(DP[1][j] == 0){
                if(abs(checking[2]-arr[2][j]) != abs(checking[1]-arr[1][j])){
                    if(checking[2] == 1){
                        cout << "-1";
                        return 0;
                    }
                    checking[2] = 1;
                    ans++;
                }
            }
        }
    for(int i = 2 ; i <= H ; i++){
        for(int j = 1 ; j <= W ; j++){
            //cout << (checking[i-1]-arr[i-1][j]) << (checking[i]-arr[i][j]);
            if((abs(checking[i-1]-arr[i-1][j]) == abs(checking[i]-arr[i][j]))){
                DP[i][j] = 1;
                DP[i-1][j] = 1;
            }
            if((arr[i][j] == arr[i][j+1]) && (j != W)){
                DP[i][j] = 1;
                DP[i][j+1] = 1;
            }
        }
    }

    for(int i = 1; i <= H; i++){
        for(int j = 1 ; j <= W ; j++){
            //cout << DP[i][j];
            if(DP[i][j] == 0){
                cout << "-1";
                return 0;
            }
        }
        //cout << "\n";
    }
    answer += min(H-ans,ans);
    cout << answer;
    


    return 0;
}