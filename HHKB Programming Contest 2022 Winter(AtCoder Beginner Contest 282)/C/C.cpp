#include<stdio.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int N;
string s;
int main(){
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    cin >> N;
    cin >> s;
    int comma = 0;
    int twin = 0;
    for(int i = 0 ; i < N ; i++){
        if(s[i] == '"'){
            if(twin == 0) twin = 1;
            else twin = 0;
        }
        else if(s[i] == ','){
            
            if(twin != 1) s[i] = '.';
        }
    }
    cout << s;

    

    return 0;
}