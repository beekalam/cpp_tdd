#define BOOST_TEST_DYN_LINK
//#define BOOST_TEST_MAIN

#include <boost/test/unit_test.hpp>
#include <MaxSubArray.h>
#include <vector>
#include <string>

using namespace std;

BOOST_AUTO_TEST_SUITE(max_subarray_sum)

    BOOST_AUTO_TEST_CASE(right_values_for_negative_numbers) {
        using namespace std;
        vector<int> vec = {1,2,3,-1,-2,-3};
        MaxSubArray *m =new MaxSubArray();
        BOOST_CHECK_EQUAL(6,m->maxSubArraySum(vec));
    }

    BOOST_AUTO_TEST_CASE(right_value_for_empty_vector) {
        using namespace std;
        vector<int> vec = {};
        MaxSubArray *m =new MaxSubArray();
        BOOST_CHECK_EQUAL(0,m->maxSubArraySum(vec));
    }

    BOOST_AUTO_TEST_CASE(right_value_for_all_positive_vector) {
        using namespace std;
        vector<int> vec = {1,2,3,0,0,1,2,3};
        MaxSubArray *m =new MaxSubArray();
        BOOST_CHECK_EQUAL(12,m->maxSubArraySum(vec));
    }

    BOOST_AUTO_TEST_CASE(right_value_for_sub_array_of_length_1) {
        using namespace std;
        vector<int> vec = {1,-1,3,-2,-1,1,-1,4};
        MaxSubArray *m =new MaxSubArray();
        BOOST_CHECK_EQUAL(4,m->maxSubArraySum(vec));
    }


    /////////////////// kadane test  /////////////
    BOOST_AUTO_TEST_CASE(kadane_right_values_for_negative_numbers) {
        using namespace std;
        vector<int> vec = {1,2,3,-1,-2,-3};
        int start=0, end = 0;
        MaxSubArray *m =new MaxSubArray();
        BOOST_CHECK_EQUAL(6,m->maxSubArraySumKadane(vec,start,end));
    }

    BOOST_AUTO_TEST_CASE(kadane_right_value_for_empty_vector) {
        using namespace std;
        vector<int> vec = {};
        int start=0, end = 0;
        MaxSubArray *m =new MaxSubArray();
        BOOST_CHECK_EQUAL(0,m->maxSubArraySumKadane(vec,start,end));
    }
    BOOST_AUTO_TEST_CASE(kadane_right_value_for_all_positive_vector) {
        using namespace std;
        vector<int> vec = {1,2,3,0,0,1,2,3};
        int start=0, end = 0;
        MaxSubArray *m =new MaxSubArray();
        BOOST_CHECK_EQUAL(12,m->maxSubArraySumKadane(vec,start,end));
        BOOST_CHECK_EQUAL(0,start);
        BOOST_CHECK_EQUAL(vec.size()-1,end);
    }

    BOOST_AUTO_TEST_CASE(kadane_right_value_for_sub_array_of_length_1) {
        using namespace std;
        vector<int> vec = {1,-1,3,-2,-1,1,-1,4};
        int start=0, end = 0;
        MaxSubArray *m =new MaxSubArray();
        BOOST_CHECK_EQUAL(4,m->maxSubArraySumKadane(vec,start,end));
        BOOST_CHECK_EQUAL(0,start);
        BOOST_CHECK_EQUAL(vec.size()-1,end);
    }



BOOST_AUTO_TEST_SUITE_END()

