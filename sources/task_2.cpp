// Copyright 2018 Your Name <your_email>

#include <tasks.hpp>

// Task 2.
int sum(const std::vector<int>& input) {
  int v;
  int si = input.size();
  v = 0;
  for (int i = 0; i < si; ++i) {
    v += input[i];
  }
  return v;
}

int square_sum(const std::vector<int>& input) {
  int v;
  int si = input.size();
  v = 0;
  for (int i = 0; i < si; ++i) {
    v += pow(input[i], 2);
  }
  return v;
}

int sum_six(const std::vector<int>& input) {
  int v;
  v = 0;
  for (int i = 0; i < 6; ++i) {
    v += input[i];
  }
  return v;
}

int sum_k(const std::vector<int>& input, int k1, int k2) {
  int v;
  v = 0;
  for (int i = k1; i < k2 + 1; ++i) {
    v += input[i];
  }
  return v;
}

int mean(const std::vector<int>& input) {
  int v;
  int si = input.size();
  v = 0;
  for (int i = 0; i < si; ++i) {
    v += input[i];
  }
  v = v / input.size();
  return v;
}

int mean_k(const std::vector<int>& input, int s1, int s2) {
  int v;
  int k = 0;
  v = 0;
  for (int i = s1; i < s2 + 1; ++i) {
    v += input[i];
    ++k;
  }
  v = v / k;
  return v;
}
