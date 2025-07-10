#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    vector<int> dailyTemperatures(vector<int> &temperatures)
    {
        int N = temperatures.size();
        stack<int> st;
        vector<int> answer(N, 0);

        for (int i = 0; i < N; i++)
        {
            while (!st.empty() && temperatures[st.top()] < temperatures[i])
            {
                answer[st.top()] = i - st.top();
                st.pop();
            }
            st.push(i);
        }

        return answer;
    }
};

int main()
{
    Solution s;

    vector<int> temp = {73, 74, 75, 71, 69, 72, 76, 73};

    vector<int> ans = s.dailyTemperatures(temp);

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    cout << endl;
}