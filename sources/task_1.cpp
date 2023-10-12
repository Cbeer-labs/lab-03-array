// Copyright 2018 Your Name <your_email>

#include <tasks.hpp>


// Task 1.
void multi_2(std::vector<int>& input) {
    int si=input.size();
    for (int i=0;i<si;++i){
        input[i]=input[i]*2;
    }
}

void reduce_a(std::vector<int>& input, int a) {
    int si=input.size();
    for (int i=0;i<si;++i){
        input[i]=(input[i]-a);
    }
}

void div_on_first(std::vector<int>& input) {
    int si=input.size();
    int fi = input[0];
    for (int i=0;i<si;++i){
        input[i]=input[i]/fi;
    }
}
