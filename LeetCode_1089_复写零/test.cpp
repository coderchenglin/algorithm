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
        //ע������ط����߼�:
        //���жϵ�ǰcurֵ��ʲô,Ȼ��dest����ƶ�,���destû�г���,����cur����ƶ�
        //���dest�Ѿ�������,cur�Ͳ������ƶ���

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