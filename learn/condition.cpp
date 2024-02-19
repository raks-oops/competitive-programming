//Rakin Shahriar
//IUT, 2024

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mod 1000000007

int main() {
    // Redirect input from input.txt
    ifstream in("../input.txt");
    cin.rdbuf(in.rdbuf());

    // Redirect output to output.txt
    ofstream out("../output.txt");
    cout.rdbuf(out.rdbuf());

    int age;
    cout<< "enter age"<<endl;
    cin>> age;

    if (age>= 18){
        cout<<"u can vote";
    }
    else if (age<18){
        cout<<"can not vote";
    }


    
    return 0;
}