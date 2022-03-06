#include<bits/stdc++.h>
using namespace std;
void canMakeTriangle(vector<int> A, int N){
        // code here
        vector<int> ans;
        for(int i = 0; i < N-2; i++){
            if(A[i] + A[i+1] > A[i+2] && A[i] + A[i+2] > A[i+1] && A[i+1] + A[i+2] > A[i]){
                ans.push_back(1);
            }
            else{
                ans.push_back(0);
            }
        }
        return ans;

}
int main(){
    vector<int> A{1, 2, 2, 4};
    int N = 4;
    canMakeTriangle(A,N);

}
