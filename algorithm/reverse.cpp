class Solution {
public:
    int reverse(int x) {
        bool native = false;
        long long res = 0;
        long long tmp = x;
        
        if (tmp < 0) {
            native = true;
            tmp = - tmp;
        }
        
        while (tmp != 0) {
            res = (res * 10) + (tmp % 10);
            tmp = tmp / 10;
        }
        
        if (native) {
            res = -res;
        }
        
        return (res<INT_MIN || res>INT_MAX) ? 0 : res;
    }
};