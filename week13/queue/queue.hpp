#pragma once

#include "list.hpp"  // [NOLINT]

template <typename T>
class Queue {
  List<T> list_;

 public:
  void push(const T& data) { list_.insert(list_.size(), data); }

  void pop() { list_.erase(0); }

  T& front() const { return list_.get(0); }

  T& back() const { return list_.get(list_.size() - 1); }

  int size() const { return list_.size(); }
};
