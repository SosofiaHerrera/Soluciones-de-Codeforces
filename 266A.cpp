#include<bits/stdc++.h>
#define ENDL '\n'
#define lli long long
#define pb push_back
#define fore(i,a, b) for(int i=a; i<b; i++)
#define all(s) begin(s), end(s)
#define sz(s) int(s.size())
#define IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;

void solve(){
    int numStones; //número de piedras
    cin >> numStones;

    char stones[numStones]; //variable para almacenar las piedras

    fore(i, 0, numStones){ //almacenar cada char ("piedra") 
        cin >> stones[i];
    }

    int minStones = 0; //variable para que haga el conteo

    fore(i, 0, numStones - 1){ // Itera solo hasta el penúltimo elemento
        if(stones[i] == stones[i+1]){
            minStones+=1;
        }
    }
    
    cout << minStones << ENDL; // Mueve la impresión fuera del bucle
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
