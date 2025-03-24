class Solution {
public:
    int countDays(int days, vector<vector<int>>& m) {
        int n = m.size();
        sort(begin(m),end(m));
        int result =0;
        int start = 0;
        int end =0;
        for(auto &meet : m ){
            if(meet[0]>end){
                result+=meet[0]-end-1;


            }
            end = max(end,meet[1]);
        }
        if(days>end){
            result += days-end;
        }


        return result;
    }
};