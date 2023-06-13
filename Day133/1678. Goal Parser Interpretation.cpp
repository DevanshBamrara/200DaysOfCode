class Solution {
public:
    string interpret(string command) {
        string ans;
        for(int i=0;i<command.size();i++){
            if(command[i]=='G')
                ans+='G';
            else if(command[i]=='(')
                if(command[i+1]=='a'){
                    ans+="al";
                    i+=2;
                }
                else{
                    ans+='o';
                    i+=1;
                }
        }
        return ans;
    }
};