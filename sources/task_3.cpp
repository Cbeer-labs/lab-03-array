// Copyright 2018 Your Name <your_email>

#include <tasks.hpp>

// Task 3.
void swap_el(std::vector<int>& input) {
    const int size = 20;
    int el;
    for (int i = 0; i < 3; ++i){
        el = input[i];
        input[i]=input[size-3+i];
        input[size-3+i]=el;
    }
}
