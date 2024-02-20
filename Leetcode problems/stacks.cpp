#include <stdio.h>
#include <iostream>
#include <stack>
#include <unordered_map>
#include <vector>


using namespace std;

class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> stack;
        int sum = 0;

        for(int i = 0; i < operations.size(); i++){
            if(operations[i] == "+"){
                int first = stack.top();
                stack.pop();

                int second = stack.top();

                stack.push(first);
                stack.push(first + second);
                sum += first + second ;
            }else if(operations[i] == "C"){
                sum -= stack.top();
                stack.pop();
            }else if(operations[i] == "D"){
                sum += 2*stack.top();
                stack.push(2*stack.top());
            }else{
                sum += stoi(operations[i]);
                stack.push(stoi(operations[i]));
            }
        }

        return sum;

    }
};

int main(){


vector<string> ops = {"5","2","C","D","+"};
printf("%d", Solution().calPoints(ops));


return 0 ;
}
