class Solution {
public:

    vector<int> findNSE(vector<int>& arr){
        vector<int> nse(arr.size());
        stack<int> st;

        for (int i=arr.size()-1; i>=0; i--){
            while (!st.empty() && arr[st.top()] >= arr[i]){
                st.pop();
            }
            nse[i] = st.empty() ? arr.size() : st.top();

            st.push(i);
        }

        return nse;

    }

    vector<int> findPSE(vector<int>& arr){
        vector<int> pse(arr.size());
        stack<int> st;

        for (int i=0; i<arr.size(); i++){
            while (!st.empty() && arr[st.top()] > arr[i]){
                st.pop();
            }
            pse[i] = st.empty() ? -1 : st.top();

            st.push(i);
        }

        return pse;

    }

    int sumSubarrayMins(vector<int>& arr) {

        vector<int> nse = findNSE(arr);
        vector<int> pse = findPSE(arr);
        int total = 0, mod = (int) (1e9+7);

        for (int i=0; i<arr.size(); i++){
            int left = i - pse[i];
            int right = nse[i] - i;

            total = (total + (1LL*right*left*arr[i]) % mod) % mod;
        }

        return total;








        
        // int mod = 1e9 + 7;
        // long long total = 0;

        // for (int i=0; i<arr.size(); i++){

        //     // or use this:
        //     vector<int> subTotal;

        //     // int mini = arr[i];

        //     for (int j=i; j<arr.size(); j++){
        //         subTotal.push_back(arr[j]);
        //         total += *min_element(subTotal.begin(), subTotal.end()) % mod;
                

        //         // mini = min(mini, arr[j]);
        //         // total = (total+mini)%mod;
        //     }      
        // } 
        // return total;
    }
};