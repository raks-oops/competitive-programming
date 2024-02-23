//Rakin Shahriar
//IUT, 2024
//A. Way Too Long Words

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

    int t;
    string st;
    cin>> t ;
    
    while(t--){
        cin>> st;
        if(st.size()>10){
            cout<<st[0]<<st.length()-2<<st[st.length()-1]<<endl;
        }
        else{
            cout<<st<<endl;
        }
    }





    
    return 0;
}