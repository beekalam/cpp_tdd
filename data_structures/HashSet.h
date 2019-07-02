//
// Created by moh on 6/15/19.
//

#ifndef UNTITLED_HASHSET_H
#define UNTITLED_HASHSET_H

#include <vector>
#include <algorithm>


class HashSet {
private:
    std::vector<int> values;
public:
    HashSet() {

    }

    int size() {
        return values.size();
    }

    void add(int value) {
        if (!contains(value))
            values.push_back(value);
    }

    bool contains(int value) {
        using namespace std;
        return find(values.begin(), values.end(), value) != values.end();
    }

    void remove(int value){
        if(contains(value)){
            auto it  = find(values.begin(), values.end(), value);
            values.erase(it);
        }
    }

};


#endif //UNTITLED_HASHSET_H
