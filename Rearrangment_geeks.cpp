#include<bits/stdc++.h>
using namespace std;
void rearrangment(long long a[], int n){
    for(int i = 0; i < n; i++){
        a[i] = a[i] + n * (a[a[i]] % n);

        
    }
    for(int i = 0; i < n; i++){
        a[i] = a[i] / n;
    }
    for(int i = 0; i < n; i++){
        cout<<a[i]<<" ";
    }

}
int main(){
    int n = 6;
    long long a[] = {0 , 5 , 1 , 2 , 4, 3};
    rearrangment(a,n);
    

}
