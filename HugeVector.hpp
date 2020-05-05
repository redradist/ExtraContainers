#ifndef HUGE_VECTOR_HPP
#define HUGE_VECTOR_HPP

#include <vector>

template <typename T, class TAlloc = std::allocator<T>>
class HugeVector : std::vector<T, TAlloc> {
 public:
  using std::vector<T, TAlloc>::vector;
  using std::vector<T, TAlloc>::operator=;
  using std::vector<T, TAlloc>::push_back;
  using std::vector<T, TAlloc>::emplace_back;
  using std::vector<T, TAlloc>::back;
  using std::vector<T, TAlloc>::get_allocator;
  using std::vector<T, TAlloc>::assign;
  using std::vector<T, TAlloc>::begin;
  using std::vector<T, TAlloc>::end;
  using std::vector<T, TAlloc>::capacity;
  using std::vector<T, TAlloc>::cbegin;
  using std::vector<T, TAlloc>::cend;
  using std::vector<T, TAlloc>::clear;
  using std::vector<T, TAlloc>::data;
  using std::vector<T, TAlloc>::front;
  using std::vector<T, TAlloc>::insert;
  using std::vector<T, TAlloc>::reserve;
  using std::vector<T, TAlloc>::rbegin;
  using std::vector<T, TAlloc>::rend;
  using std::vector<T, TAlloc>::max_size;
  using std::vector<T, TAlloc>::swap;
  using std::vector<T, TAlloc>::at;
  using std::vector<T, TAlloc>::operator[];

  HugeVector(const HugeVector&) = delete;
  HugeVector(HugeVector&&) = default;
  HugeVector & operator=(const HugeVector&) = delete;
  HugeVector & operator=(HugeVector&&) = default;
};

#endif
