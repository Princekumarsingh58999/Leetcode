class Solution {
public:
    vector<int> decode(vector<int>& encoded, int first) {
      vector<int> v; 
        int n=encoded.size();
        int temp=first;
        v.push_back(first);
        for(int i=0;i<n;i++){
            temp=encoded[i]^temp;
            v.push_back(temp);
        }
        return v;
    }
    
};