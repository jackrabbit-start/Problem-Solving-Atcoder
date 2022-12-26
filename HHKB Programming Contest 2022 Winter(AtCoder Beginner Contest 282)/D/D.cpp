#include<stdio.h>
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;


vector<long long int> graph[300000];
long long int visited[300000];
long long n_graph;

long long int N, M;
long long int check;
long long int black;
long long int white;
long long int ans;
void DFS(long long int now){
    for(long long int i = 0; i < graph[now].size(); i++){
        long long int next = graph[now][i];
        if(!visited[next]){
            if(visited[now] == 1){
                visited[next]= 2;
                white++;
                DFS(next);
            }
            else{
                visited[next] = 1;
                black++;
                DFS(next);
            }

        }
        else{
            if(visited[next] == visited[now]){
                check = 0;
                return;
            }           
        }
    }
}

int main(){
    ios_base :: sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    cin >> N >> M;
    ans = 0;
    n_graph = 0;
    check = 1;
    for(long long int i = 0 ; i < M ; i++){
        long long int a, b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for(long long int i = 1; i <= N; i++){
        black = 1;
        white = 0;
        if(!visited[i]){
            visited[i] = 1;
            DFS(i);
            ans += black * (N-black);
            ans += white * (N-white);
        }
    }
    if(check == 0) {cout << "0\n";}
    else{
    ans /= 2;
    cout << ans-M;
    }

    
    return 0;
}