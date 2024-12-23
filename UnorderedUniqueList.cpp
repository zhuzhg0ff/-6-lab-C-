#include "UnorderedUniqueList.h"

template <typename T>
void UnorderedUniqueList<T>::add(T value) {
    elements.insert(value);
}

template <typename T>
void UnorderedUniqueList<T>::remove(T value) {
    elements.erase(value);
}

template <typename T>
bool UnorderedUniqueList<T>::contains(T value) const {
    return elements.find(value) != elements.end();
}

template <typename T>
UnorderedUniqueList<T> UnorderedUniqueList<T>::unionWith(const UnorderedUniqueList& other) const {
    UnorderedUniqueList result = *this;
    for (const auto& elem : other.elements) {
        result.add(elem);
    }
    return result;
}

template <typename T>
UnorderedUniqueList<T> UnorderedUniqueList<T>::intersectWith(const UnorderedUniqueList& other) const {
    UnorderedUniqueList result;
    for (const auto& elem : elements) {
        if (other.contains(elem)) {
            result.add(elem);
        }
    }
    return result;
}

template <typename T>
UnorderedUniqueList<T> UnorderedUniqueList<T>::exceptWith(const UnorderedUniqueList& other) const {
    UnorderedUniqueList result;
    for (const auto& elem : elements) {
        if (!other.contains(elem)) {
            result.add(elem);
        }
    }
    return result;
}

template <typename T>
void UnorderedUniqueList<T>::print() const {
    for (const auto& elem : elements) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

// Не забудьте добавить реализации!
template class UnorderedUniqueList<int>;    
template class UnorderedUniqueList<std::string>;
