class Solution {
public:
    vector<string> splitWordsBySeparator(vector<string>& words, char separator) {
        string str="";

    //create new single string
    for(auto it:words)
    str+=it+separator;

    vector<string> res;

    //temporary string
    string temp="";
    for(int i=0;i<str.length();i++){
        if(str[i]==separator)
        {
            if(temp.size()>0)
            res.push_back(temp);
            temp="";
        }
        else
            temp+=str[i];
    }
    return res;
    }
};