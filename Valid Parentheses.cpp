class Solution {
public:
    bool isValid(string s) {
        stack<char>st;
        for(int i=0 ; i<s.length() ; i++){
            if(st.empty() && (s[i]==')' || s[i]==']' || s[i]=='}'))return false;
            else {
                if(!st.empty()&&(s[i]==')' && st.top()=='(')||(s[i]==']' && st.top()=='[') ||(s[i]=='}' && st.top()=='{')){
                    st.pop();
                }
                else if (s[i]=='(' || s[i]=='[' || s[i]=='{')st.push(s[i]);
                else return false;
            }

        }
        if(st.empty())return true;
        return false;
    }
};
