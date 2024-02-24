//Rakin Shahriar
//IUT, 2024

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007

int main() {
    // // Redirect input from input.txt
    // ifstream in("../input.txt");
    // cin.rdbuf(in.rdbuf());

    // // Redirect output to output.txt
    // ofstream out("../output.txt");
    // cout.rdbuf(out.rdbuf());

    
    ll t;

    cin >> t;
 
    
    while(t--){
        ll n, ones = 0, zeros = 0;
        cin >> n;
        ll arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if(arr[i] == 1){
                ones++;
            }
        } 

        ll max_ones = ones; 

        for(int i=0; i<n; i++){
            if(arr[i] == 1){
                ones--;
            }
            if(ones != 0 && ones != max_ones){
                if(arr[i] == 0){
                    zeros++;
                }
            }
        }   

        cout << zeros << endl;   
    }



    
    return 0;
}