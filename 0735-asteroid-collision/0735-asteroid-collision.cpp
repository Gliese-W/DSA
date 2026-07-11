class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> st;

        int n = asteroids.size();

        for (int i=0; i<n; i++){
            if (asteroids[i]>0){
                st.push_back(asteroids[i]);
            } else{
                while (!st.empty() && st.back()>0 && st.back() < abs(asteroids[i])){
                    st.pop_back();
                }
                
                if (!st.empty() && st.back() == abs(asteroids[i])){
                    st.pop_back();
                }

                else if (st.empty() || st.back()<0){
                    st.push_back(asteroids[i]);
                } 
            }
        }

        return st;


















        // Not working




        // st.push(asteroids[0]);
        
        // for (int i=1; i<n; i++){
            
        //     if ( (st.top()>0 && asteroids[i]>0) || (st.top()<0 && asteroids[i]<0)){
        //         st.push(asteroids[i]);
        //         continue;
        //     } else if ((st.top()>0 && asteroids[i]<0) || (st.top()<0 && asteroids[i]>0)){
        //         if (abs(st.top()) < abs(asteroids[i])){
        //             st.pop();
        //         } else if (abs(st.top()) > abs(asteroids[i])){
        //             i++;
        //             continue;
        //         } else{
        //             st.pop();
        //             i++;
        //         }
        //     }
        // }

        // while(!st.empty()){
        //     v.push_back(st.top());
        //     st.pop();
        // }

        // reverse(v.begin(), v.end());

        // return v;
    }
};