#include<bits/stdc++.h>
using namespace std;
void majorityElement(vector<int>& nums) {
    int n = nums.size();
    unordered_map<int,int> m;
    int ans;
    for(int i  = 0; i < n; i++){
        m[nums[i]]++;

    }
     for(int i  = 0; i < n; i++){
        if(m[nums[i]] > n/2){
            ans = nums[i];
            break;
        }
        
    }
    cout<<ans<<endl;
}
int main(){
    vector<int> nums;
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        nums.push_back(x);
    }
    majorityElement(nums);
}
