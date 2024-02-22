#include<bits/stdc++.h>
#define ENDL '\n'
#define lli long long
#define pb push_back
#define fore(i,a, b) for(int i=a; i<b; i++)
#define all(s) begin(s), end(s)
#define sz(s) int(s.size())
#define IO ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)

using namespace std;
using vi = vector<int>;

void solve(){
    int cards;
    cin >> cards;
    int arr[cards];

    fore(i,0, cards){
        cin >> arr[i];
    }

    int left = 0;
    int right = cards-1;
    int scoreS = 0;
    int scoreD = 0;

    fore(i,0, cards){
        if(i%2==0){
            if(arr[right]>arr[left]){
                scoreS+=arr[right];
                --right;
            }
            else if(arr[right]<arr[left]){
                scoreS+=arr[left];
                ++left;
            }
            else{
                scoreS+=arr[left];
            }
        }
        else{
            if(arr[right]>arr[left]){
                scoreD+=arr[right];
                --right;
            }
            else if(arr[right]<arr[left]){
                scoreD+=arr[left];
                ++left;
            }
            else{
                scoreD+=arr[left];
            }
        }        
    }

    cout << scoreS << " "<<scoreD << ENDL;    
}

int main(){
    IO;
    //int t; cin>>t; while(t--)
    solve();
    return 0;
}
