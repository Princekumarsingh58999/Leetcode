class Solution {
public:
    string largestOddNumber(string num) {
//         int k=0;
//         int p= stoi(num);
//         if(p%2!=0)
//             return num;
//       while(p){
//           if(p%2!=0){
//               k=p;
//               break;}
//           p=p/10;
//       }
//         string s=to_string(k);
//         if(k==0)
//             return "";
// return s;
        
        int n=num.size();
        for(int i=n-1;i>=0;i--){
            if(num[i]%2==0)
             num.pop_back();
            else break;
        }
        return num;
    }
};