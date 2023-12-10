#pragma once

#include "list.hpp"  // [NOLINT]

template <typename T>
class Stack {
  List<T> list_;

 public:
  void push(const T& data) { list_.insert(0, data); }

  void pop() { list_.erase(0); }

  T& top() const { return list_.get(0); }
  int size() const { return list_.size(); }
};