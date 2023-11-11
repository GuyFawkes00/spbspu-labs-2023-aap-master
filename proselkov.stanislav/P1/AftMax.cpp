#include <limits>
#include <stdexcept>
#include "AftMax.hpp"

proselkov::AftMax::AftMax():
  aftMax_(0)
{}

void proselkov::AftMax::operator()(int number)
{
  const size_t maxSize = std::numeric_limits< size_t >::max();
  if (aftMax_ == maxSize)
  {
    throw std::logic_error("Sequence is too long.");
  }
  if (number > max_number)
  {
    max_number = number;
    aftMax_ = 0;
  }
  else if (number)
  {
    aftMax_++;
  }
}

size_t proselkov::AftMax::operator()() const
{
  return aftMax_;
}