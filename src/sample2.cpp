#include "sample2.h"
#include <stdexcept>

int sample2_throws_error() {
  throw std::runtime_error("error"); 
  return 0;
}
