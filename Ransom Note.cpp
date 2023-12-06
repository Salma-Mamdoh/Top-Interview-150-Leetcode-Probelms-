class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        map<char,int>mm;
        for(int i=0 ; i<magazine.length() ; i++){
            mm[magazine[i]]++;
        }
        for(int i=0 ; i<ransomNote.length() ; i++){
            if(mm.find(ransomNote[i])!=mm.end() && mm[ransomNote[i]]>0){
                mm[ransomNote[i]]--;
            }
            else{
                return false;
            }
        }
        return true;
        
    }
};
