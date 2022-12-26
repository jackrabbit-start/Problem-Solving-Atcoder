#include <bits/stdc++.h>
using namespace std;

int N;
int Q;
int arr[100004];
int main(){
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    cin >> N;
    for(int i = 0 ; i < N ; i++){
        cin >> arr[i];   
    }
    cin >> Q;
    int a, b, c;
    while(Q--){
        cin >> a >> b;
        if(a == 1){
            cin >> c;
            arr[b-1] = c;
        }
        else{
            cout << arr[b-1] << "\n";
        }
    }

    return 0;
}