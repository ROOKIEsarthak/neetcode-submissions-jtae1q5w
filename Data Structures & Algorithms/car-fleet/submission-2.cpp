class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>>v;
        stack<double>st;
        for(int i = 0 ; i < min(position.size(),speed.size()) ; i++){
            v.push_back({position[i],speed[i]});
        }
        sort(v.begin(), v.end(), greater<pair<int,int>>());
        for(auto i : v){
            double time = 0;
            int val = 0;
            time = ((double)(target - i.first) / i.second);
            if(st.empty()){
                st.push(time);
            }else if(time > st.top()){
                st.push(time);
            }
        }
        return st.size();
    }
};
