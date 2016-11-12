//typedef int data_t;
#include <iostream>

bool my_less(const BlackInt &lhs, const BlackInt& rhs) {
    //return lhs.operator< (rhs);
    return lhs < rhs; 
}

template <typename data_t, typename less_t>
void sort(data_t *data, size_t sz, const less_t &less) {
    for (size_t i = 0; i + 1 < sz; ++i) {
        for (size_t j = sz - 1; i < j; --j) {
            if (less(data[j], data[j - 1])) {
                std::swap(data[j], data[j - 1]);
            }
        }
    }

    for (size_t i = 0; i < sz; ++i) {
        std::cout << reinterpret_cast<uint32_t*>(data)[i] << " ";   
    }
    std::cout << "\n";
}


void sort(BlackInt *begin, BlackInt *end) {
    sort(begin, end - begin, my_less);
}

