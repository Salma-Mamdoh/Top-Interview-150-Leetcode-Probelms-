class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string output="";
        string small=*min_element(strs.begin(),strs.end());
        int n=small.length();
        for(int i=0 ; i<n; i++){
            int cnt=0;
            for(int j=0 ; j<strs.size() ; j++){
                if(small[i]==strs[j][i])cnt++;
            }
            if(cnt==strs.size())output+=small[i];
            else{
                break;
            }
        }
        return output;
        
    }
};
