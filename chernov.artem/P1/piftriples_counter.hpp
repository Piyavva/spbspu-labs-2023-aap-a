#ifndef PIFTRIPLES_COUNTER_HPP
#define PIFTRIPLES_COUNTER_HPP
#include <cstddef>

namespace chernov
{
  struct PifTriplesCounter
  {
    PifTriplesCounter();
    void operator()(int number);
    size_t operator()() const;
  private:
    bool pifTriple(int number);
    size_t piftriples_;
    int perv_el_;
    int vtor_el_;
  };
}

#endif
