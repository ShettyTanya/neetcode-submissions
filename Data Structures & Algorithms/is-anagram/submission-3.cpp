class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> seen;
        if (s.size()!=t.size()){
            return false;
        }
        for(int i=0;i<s.size();i++){
            if(!seen.count(s[i])){
                seen[s[i]]=1;
            }
            else{
                seen[s[i]]+=1;
            }
        }
        for(int i=0;i<t.size();i++){
            if(!seen.count(t[i])){
                return false;
            }
            else{
                seen[t[i]]-=1;
            }
        }
        for( auto it:seen){
            if(it.second!=0){
                return false;
            }
        }
        return true;


        
    }
};
