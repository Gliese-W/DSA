class Solution {
public:

    vector<int> findNSE(vector<int>& arr){
        stack<int> st;
        vector<int> nse(arr.size());

        for (int i=arr.size()-1; i>=0; i--){
            while (!st.empty() && arr[st.top()] > arr[i]){
                st.pop();
            }

            nse[i] = st.empty() ? arr.size() : st.top();

            st.push(i);
        }

        return nse;
    }

    vector<int> findPSE(vector<int>& arr){
        stack<int> st;
        vector<int> pse(arr.size());

        for (int i=0; i<arr.size(); i++){
            while (!st.empty() && arr[st.top()] >= arr[i]){
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

        int total = 0; 
        int mod = (int) (1e9 + 7);

        for (int i=0; i<arr.size(); i++){
            int left = i - pse[i];
            int right = nse[i] - i;

            total = (total + (1LL*right*left*arr[i])%mod)%mod;
        }

        return total;
    }
};