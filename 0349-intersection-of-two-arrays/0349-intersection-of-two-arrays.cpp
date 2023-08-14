class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
//         set<int> v;
       
//         for(int i=0;i<nums1.size();i++){
//             for(int j=i;j<nums2.size();j++){
//             if(nums1[i]==nums2[j]){
//                 v.insert(nums1[i]);
//                break;
//                 }
//         }
//         }
//         vector<int>v1;
//         for(auto i=v.begin();i!=v.end();i++){
//             v1.push_back(*i);
//         }
//         return v1;
            
    // }
      set<int> st;        
    for(int itr = 0; itr < nums1.size(); itr++){
        for(int jtr = 0; jtr < nums2.size(); jtr++){
            if(nums1[itr] == nums2[jtr]){
                st.insert(nums1[itr]);
                break;
            }
        }
    }
    
    vector<int> vt;
    for(auto itr = st.begin(); itr != st.end(); itr++){
        vt.push_back(*itr);
    }
    return vt;
    }
};