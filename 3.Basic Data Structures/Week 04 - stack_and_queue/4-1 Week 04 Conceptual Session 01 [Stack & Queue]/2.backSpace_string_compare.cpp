class Solution {
public:
    stack<char>ss,tt;
    bool backspaceCompare(string s, string t) {
        for(char x:s){
            if(x=='#') {
                if(!ss.empty()){
                    ss.pop();
                }
            }else{
                ss.push(x);
            }
        }
        for(char x:t){
            if(x=='#') {
                if(!tt.empty()){
                    tt.pop();
                }
            }else{
                tt.push(x);
            }
        }
        if(ss.size()!=tt.size()){
            return false;
        }else{
            while(!ss.empty()){
                int ssT=ss.top();
                ss.pop();
                int ttT=tt.top();
                tt.pop();
                if(ssT!=ttT) return false;
            }
            return true;
        }
    }
};