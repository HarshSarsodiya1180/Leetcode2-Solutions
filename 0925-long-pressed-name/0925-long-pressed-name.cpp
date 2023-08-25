class Solution {
public:
    bool isLongPressedName(string name, string typed) {
       if(name[0]!=typed[0]) return false;
        int i=0,j=0;
        while(i<typed.size() || j<name.size()){
            if(typed[i]==name[j]) j++;
            else if(typed[i]!=typed[i-1]) return false;
            i++;
        }
        return true;
    }
};