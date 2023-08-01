class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int>q;
        for(int i=1;i<=n;i++){
            q.push(i);
        }
            int kk=k;

        while(q.size()>1){
            int dt=q.front();
            q.pop();
            kk--;
            if(kk==0){
                kk=k;
            }else{
                q.push(dt);
            }
        }
        return q.front();
    }
};