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

    ll count = 0;

    ll t;
    cin >> t;
    while(t--){

        ll a, b, c;
        cin >> a >> b >> c;
        ll sum = a + b + c;
        
        if(sum >= 2){
            count++;
        }

        
    }
    cout << count << endl;


    
    return 0;
}