#include<stdio.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int K;
int main(){
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    cin >> K;
    char a = 'A';
    for(int i = 0 ; i < K ; i++){
        cout << a;
        a++;
    }
    cout << "\n";
    

    return 0;
}