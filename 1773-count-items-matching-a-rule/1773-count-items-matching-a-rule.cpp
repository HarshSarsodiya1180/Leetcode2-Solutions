class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {
       unordered_map<string,vector<string>> mp;
        for(int i=0;i<items.size();++i){
           mp["type"].push_back(items[i][0]);
           mp["color"].push_back(items[i][1]);
           mp["name"].push_back(items[i][2]); 
        }
        int count=0;
        for( auto i:mp[ruleKey]){
            if(i==ruleValue) ++count;
        }
        return count;
    }
};