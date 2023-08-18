class Solution {
public:
    bool checkIfPangram(string sentence) {
        int flag=0;
        const unordered_set<char>s(sentence.begin(),sentence.end());
        if(s.size()==26)
        return true;
        else return false;
        
        
    }
};