class Solution {
public:
    bool ispalindrome(string words){
            int begin=0;
            int end=words.size()-1;
            while(begin<end){
                if(words[begin]!=words[end])
                    return false;
                else {
                    begin++;
                    end--;}
            }
        return true;
                
    }
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
       if(ispalindrome(words[i]))
           return words[i];}
         return "";
    }
};