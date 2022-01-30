#include<bits/stdc++.h>
using namespace std;
void RotateArray(vector<int> &nums, int k){
   int n = nums.size();
   //to handel segmentation fault......if k > n;
   if(k > n){
       k = k % n;
   }
   reverse(nums.rbegin(),nums.rbegin()+k);
   reverse(nums.rbegin()+k,nums.rend());
   reverse(nums.begin(),nums.end());
   for(auto it : nums){
       cout<<it<<" ";
   }
}
int main(){
    vector<int> nums{1,2,3,4,5,6,7};
    int d;
    cin>>d;
    RotateArray(nums,d);

}


//time complexity of this algorithm is : O(n)
//Space complexity of this algorithm of : O(1)
