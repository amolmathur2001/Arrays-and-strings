#include<bits/stdc++.h>
using namespace std;
void sortArrayByParity(vector<int>& nums) {
    vector<int> even;
    vector<int> odd;
    for(int i = 0; i < nums.size(); i++){
        if(nums[i] % 2 == 0){
            even.push_back(nums[i]);
        }
        else{
            odd.push_back(nums[i]);
        }
    }
    even.insert(even.end(),odd.begin(),odd.end());
    for(auto it : even){
        cout<<it<<" ";
    }


        
        
}

int main(){
    vector<int> nums{3,1,2,4};
    sortArrayByParity(nums);

}
