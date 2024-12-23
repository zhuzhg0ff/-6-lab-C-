#ifndef UNORDERED_UNIQUE_LIST_H
#define UNORDERED_UNIQUE_LIST_H

#include <unordered_set>
#include <iostream>

template <typename T>
class UnorderedUniqueList {
private:
    std::unordered_set<T> elements;

public:
    void add(T value);
    void remove(T value);
    bool contains(T value) const;
    UnorderedUniqueList unionWith(const UnorderedUniqueList& other) const;
    UnorderedUniqueList intersectWith(const UnorderedUniqueList& other) const;
    UnorderedUniqueList exceptWith(const UnorderedUniqueList& other) const;
    void print() const;
};

#endif // UNORDERED_UNIQUE_LIST_H
