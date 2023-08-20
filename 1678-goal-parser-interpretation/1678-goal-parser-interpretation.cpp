class Solution {
public:
    string interpret(string command) {
//       string s="",str;
//         for(auto ch:command){
//             s+=ch;
//             if(s=="G"){
//                 str+="G";
//             s="";}
//             else if(s=="()"){
//                 str+="o";
//                 s="";}
            
//                     else if(s=="(al)"){
//                     str+="al";
//                         s="";}
//         }
//                     return str;
        
        string s;
        for(int i=0;i<command.size();i++){
            if(command[i]=='G')
             s.push_back('G');
            else if(command[i]=='(' ){
                if(command[i+1]==')')
                s.push_back('o');
            else
            {
                s.push_back('a');
                s.push_back('l');
            }
    }
        }
        return s;
    }
};