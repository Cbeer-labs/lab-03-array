// Copyright 2018 Your Name <your_email>

#include <tasks.hpp>

// Task 4.
void remove_negative(std::vector<int>& input) {
    auto iter = input.cbegin();
    int si=input.size();
    for (int i=0;i<si;++i){
        if (input[i]<0){
            input.erase(iter+i);
            break;
            }
    }
}

void remove_last_even(std::vector<int>& input) {
    auto iter = input.cbegin();
    int suze = input.size();
    for (int i=suze-1;i>=0;i--){
        if (input[i]%2==0){
            input.erase(iter+i);
            break;
            }
    }
}
