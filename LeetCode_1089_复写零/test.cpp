class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int dest = -1, cur = 0;
        int n = arr.size();

        while (cur <= n) {
            if (arr[cur] != 0) {
                //cur++;
                dest++;
            }
            else {
                //cur++;
                dest += 2;
            }
            if (dest >= n - 1)
                break;
            cur++;
        }
        //注意这个地方的逻辑:
        //先判断当前cur值是什么,然后dest向后移动,如果dest没有出界,再让cur向后移动
        //如果dest已经出界了,cur就不往后移动了

        if (dest == n) {
            arr[dest - 1] = 0;
            dest -= 2;
            cur--;
        }

        while (cur >= 0) {
            if (arr[cur] != 0) {
                arr[dest] = arr[cur];
                dest--;
                cur--;
            }
            else {
                arr[dest] = arr[dest - 1] = 0;
                dest -= 2;
                cur--;
            }
        }
    }
};