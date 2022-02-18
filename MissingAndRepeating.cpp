//Gfg Q. Find missing and repeating number

#include<bits/stdc++.h>
using namespace std;
void findTwoElement(int *arr, int n) {
        // code here
        int missing = -1;
        int repeating = -1;
       // cout<<"hello"<<endl;
        vector<int> vec(n+1,0);
        for(int i = 0; i < n; i++){
            vec[arr[i]]++;
        }
        for(int i = 1; i <= n; i++){
            if(vec[i] == 0){
                missing = i;

            }
            if(vec[i] > 1){
                repeating = i;
            }
        }
        //cout<<repeating<<" "<<missing<<endl;
        int ans[2];
        ans[0] = repeating;
        ans[1]  = missing;
        for(int i = 0; i < 2; i++){
            cout<<ans[i]<<" ";
        }


}
int main(){
    int arr[2] = {2 , 2};
    int n = 2;
    findTwoElement(arr,n);

}
