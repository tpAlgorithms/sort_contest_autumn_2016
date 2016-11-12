#include <iostream>
#include <stack>

BlackInt * partition(BlackInt *begin, BlackInt *end) {
    BlackInt *it  = begin + 1;
    BlackInt *jt  = begin + 1;
   
    for (; jt != end; ++jt) {
        if ((jt - begin) % 2) {
            if (*jt < *begin) {
                std::swap(*it, *jt);
                ++it;
            }
        } else {
            if (*jt <= *begin) {
                std::swap(*it, *jt);
                ++it;
            }
        }
    }
    --it;
    std::swap(*begin, *it);

    return it;
}

void qsort(BlackInt *begin, BlackInt *end) {
    if (end - begin < 2) return;
    
    int pivot_pos = rand() % (end - begin);
    std::swap(begin[0], begin[pivot_pos]);

    BlackInt *middle = partition(begin, end);
    qsort(begin, middle);
    qsort(middle + 1, end);
}

void qsort_non_recursive(BlackInt *begin, BlackInt *end) {
    
    std::stack<std::pair<BlackInt*, BlackInt*> > stack;
    stack.push(std::make_pair(begin, end));

    while(!stack.empty()) {
        begin = stack.top().first;
        end = stack.top().second;
        stack.pop();
    
        if (end - begin < 2) continue;

        int pivot_pos = rand() % (end - begin);
        std::swap(begin[0], begin[pivot_pos]);

        BlackInt *middle = partition(begin, end);
      
        stack.push(std::make_pair(begin, middle));
        stack.push(std::make_pair(middle + 1, end));
    }
}

void sort(BlackInt *begin, BlackInt *end) {
    srand(42);
    //qsort(begin, end);
    qsort_non_recursive(begin, end);
//    for (BlackInt *it = begin; it != end; ++it) {
//        std::cout << reinterpret_cast<uint32_t*>(it)[0] << " ";   
//    }
//    std::cout << "\n";
}
