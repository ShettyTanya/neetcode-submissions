class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size()!=t.size()){
            return false;
        }

        vector<int> seen(26,0);

        for(int i=0;i<s.size();i++){
            seen[s[i]-'a']+=1;

        }
        for(int i=0;i<t.size();i++){
            seen[t[i]-'a']-=1;           
        }
        for(int i:seen){
            if(i!=0){
                return false;
            }
        }
        return true;


        
    }
};
