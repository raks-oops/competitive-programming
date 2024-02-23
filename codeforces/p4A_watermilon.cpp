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


    int weight;
    cin>> weight;

    if (weight %2 ==0 && weight > 2){
        cout<< "YES"<<endl;
    }
    else{
        cout<< "NO"<<endl;
    }
    




    
    return 0;
}