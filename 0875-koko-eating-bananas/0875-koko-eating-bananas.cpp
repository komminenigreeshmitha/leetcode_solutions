class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int lo=1,hi=*max_element(piles.begin(),piles.end());
        while(lo<hi){
            int m=(lo+hi)/2;
            int c=0;
            for(int p:piles)c+=ceil(p/(double)m);
            if(c<=h)hi=m;
            else lo=m+1;
        }
        return lo;
    }
};