class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>v;
        
        for(int i=left;i<=right;i++){
            int p=i;
            while(p>0){
                int k=p%10;
                if(k==0 || i%k!=0){
                    break;
                }
                    p=p/10;
            }
            if(p==0)
                v.push_back(i);
        }
        return v;
    }
};