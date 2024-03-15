class Solution {
public:
    string reverseWords(string s) {
        stack<string>stk;
        string temp="";
        s+=" ";
        for(int i=0 ; i<s.length() ; i++){
            if(s[i]!=' '){
                temp+=s[i];
            }
            else{
                if(!temp.empty())stk.push(temp);
                temp="";
            }
        }
        string ans="";
        while(!stk.empty()){
            ans+=stk.top();
            ans+=" ";
            stk.pop();
        }
        ans.erase(ans.size()-1);
        return ans;
    }
};
