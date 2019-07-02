
#ifndef UNTITLED_MAXSUBARRAY_H
#define UNTITLED_MAXSUBARRAY_H

#include <vector>
#include <limits>

class MaxSubArray {
public:
    int maxSubArraySum(const std::vector<int> &v) {
        int max_so_far = 0, max_ending_here = 0;
        for (unsigned int i = 0; i < v.size(); i++) {
            max_ending_here = max_ending_here + v[i];
            if (max_ending_here < 0) {
                max_ending_here = 0;
            }
            if (max_so_far < max_ending_here) {
                max_so_far = max_ending_here;
            }
        }
        return max_so_far;

    }

    int maxSubArraySumKadane(const std::vector<int> &v, int &start, int &finish) {
        int maxSum = -std::numeric_limits<int>::max(), sum = 0;
        unsigned int left = 0, right = 0;
        start = finish = 0;

        for (unsigned int i = 0; i < v.size(); i++) {
            sum += v[i];
            if (sum > maxSum) {
                maxSum = sum;
                finish = right = i;
                start = left;
            } else if (sum < 0) {
                sum = 0;
                left = right = i + 1;
            }

        }
        return maxSum == -std::numeric_limits<int>::max() ? 0 : maxSum;
    }
};

#endif //UNTITLED_MAXSUBARRAY_H
