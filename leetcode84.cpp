class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
int len = heights.size();
        vector<int> newheights(len+2);
        newheights[0]=0;
        newheights[newheights.size()-1]=0;
        std::copy(heights.begin(),heights.end(),newheights.begin()+1);
        stack<int> mystack;
        int res = 0;
        mystack.push(0);
        for(int i=1;i<len+2;i++){
            while(newheights[i]<newheights[mystack.top()]){
                int high = newheights[mystack.top()];
                mystack.pop();
                int mleft = mystack.top();
                res = max(res,(i-mleft-1)*high);
            }
            mystack.push(i);
        }
        return res;
    }
};
