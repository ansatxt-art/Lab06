#include<iostream>
using namespace std;
int main(){
    int N, asteriskSum = 0;
    cout<<"Enter a positive integer(3 <= N <= 15): ";
    cin>>N;
    while ( N <= 3 || N >= 15){
        cout<<"\nInvalid answer. Enter again: ";
        cin>>N;
    }
    cout<<"\n";
    for(int i = 1; i <= N; i++){
        for(int j = 1; j<= N; j++){
            if (i==j || i+j == N+1){
                cout<<"*";
                asteriskSum += j;
            }
            else if (i==1 || i == N || j == 1 || j== N)
             cout<<"#";
            else
             cout<<" ";
        }
        cout<<"\n";
    }
    if (asteriskSum % 2 == 0)
     cout<<"\nThe sum of the indices is even.";
    else
     cout<<"\nThe sum is odd.";
}