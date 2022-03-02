/// Using Two pointers Approach 
//Time Complexity is : O(str.len(s) + str.len(t) )

#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isSubsequence(string s, string t) {
        int j = 0;
        for(int i = 0; s[i] != '\0'; i++){
            while(t[j] && t[j] != s[i]){
                j++;
            }
            if(t[j] == '\0'){
                return false;
            }
            j++;
        }       
        return true; 

        
    }
};
int main(){
    string s;
    cin>>s;
    string t;
    cin>>t;
    Solution s1;
    if(s1.isSubsequence(s,t)){
        cout<<"true"<<endl;
    }
    else{
        cout<<"false"<<endl;
    }
}
