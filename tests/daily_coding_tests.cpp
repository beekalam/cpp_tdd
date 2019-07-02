#define BOOST_TEST_DYN_LINK
#define BOOST_TEST_MAIN

#include <boost/test/unit_test.hpp>
#include <Problem57.h>
#include <vector>
#include <string>

using namespace std;

BOOST_AUTO_TEST_SUITE(problem_57)

    BOOST_AUTO_TEST_CASE(solve_for_empty_string) {
        Problem57 *p = new Problem57();
        std::vector<std::string> ans = {""};
        std::vector<std::string> rans = p->solve("", 10);
        BOOST_CHECK_EQUAL_COLLECTIONS(rans.begin(), rans.end(), ans.begin(), ans.end());
    }

    BOOST_AUTO_TEST_CASE(solve_for_string_less_than_k) {
        Problem57 *p = new Problem57();
        vector<string> ans = p->solve("uick brow", 10);
        vector<string> rans = {"uick brow"};
        BOOST_CHECK_EQUAL_COLLECTIONS(rans.begin(), rans.end(), ans.begin(), ans.end());
    }

    BOOST_AUTO_TEST_CASE(solve_for_sample_string) {
        Problem57 *p = new Problem57();
        string s = "the quick brown fox jumps over the lazy dog";
        vector<string> ans = p->solve(s, 10);
        vector<string> rans = {"the quick", "brown fox", "jumps over", "the lazy", "dog"};
        BOOST_CHECK_EQUAL_COLLECTIONS(rans.begin(), rans.end(), ans.begin(), ans.end());
    }

    BOOST_AUTO_TEST_CASE(solve_when_string_cannot_be_broken) {
        Problem57 *p = new Problem57();
        string s = "the quick brown fox jumps over the lazy dog";
        vector<string> ans = p->solve(s, 3);
        vector<string> rans = {};
        BOOST_CHECK_EQUAL_COLLECTIONS(rans.begin(), rans.end(), ans.begin(), ans.end());
    }

BOOST_AUTO_TEST_SUITE_END()