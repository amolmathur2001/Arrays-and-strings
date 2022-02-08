//basic array implementation is used;
///time complexity of O(nlog(n));
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int minSwaps(vector<int> &arr){
        vector<pair<int,int> > ans;
        for(int i = 0; i < arr.size(); i++){
            ans.push_back(make_pair(arr[i],i));
        }
        sort(ans.begin(),ans.end());
        int cnt = 0;
        for(int i = 0; i < arr.size(); i++){
            if(ans[i].second != i){
                cnt++;
                swap(ans[i],ans[ans[i].second]);
            }
        }
       return(cnt);

    }
};
int main(){
    vector<int> arr{10,19,6,3,5};
    Solution s1;
    cout<<s1.minSwaps(arr);

}


///Approch 2;
