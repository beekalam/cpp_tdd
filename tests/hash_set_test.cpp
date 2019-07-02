#define BOOST_TEST_DYN_LINK
//#define BOOST_TEST_MAIN

#include <boost/test/unit_test.hpp>
#include <HashSet.h>
#include <vector>
#include <string>

using namespace std;

BOOST_AUTO_TEST_SUITE(hash_set_test)

    BOOST_AUTO_TEST_CASE(newly_created_hashset_should_have_size_0) {
        HashSet *hashset = new HashSet();
        BOOST_CHECK_EQUAL(0,hashset->size());
    }


    BOOST_AUTO_TEST_CASE(when_given_duplicate_values_should_retain_only_one) {
        HashSet *hashset = new HashSet();
        hashset->add(1);
        hashset->add(1);
        BOOST_CHECK_EQUAL(1,hashset->size());

        BOOST_CHECK_EQUAL(true,hashset->contains(1));
    }

    BOOST_AUTO_TEST_CASE(when_given_1_and_removed_should_not_contain_1) {
        HashSet *hashset = new HashSet();
        hashset->add(1);
        hashset->remove(1);

        BOOST_CHECK_EQUAL(false,hashset->contains(1));
    }

    BOOST_AUTO_TEST_CASE(when_none_existing_element_removed_size_should_remain_constant) {
        HashSet *hashset = new HashSet();
        hashset->remove(1);
        BOOST_CHECK_EQUAL(0,hashset->size());
    }

BOOST_AUTO_TEST_SUITE_END()
