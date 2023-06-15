class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> stack;
        for(int i=0;i<operations.size();i++){
            if(operations[i]=="+"){
                int t1 = stack.top();
                stack.pop();
                int t2 = stack.top();
                stack.pop();
                int t3 = t1+t2;
                stack.push(t2);
                stack.push(t1);
                stack.push(t3);
            }
            else if(operations[i]=="D"){
                int t1 = stack.top();
                stack.push(t1*2);
            }
            else if(operations[i]=="C"){
                 stack.pop();
            }
            else{
                int num = stoi(operations[i]);
                stack.push(num);
            }
        }
        int ans = 0;
        while (!stack.empty()) {
            ans+= stack.top();
            stack.pop();
        }
        return ans;
    }
};