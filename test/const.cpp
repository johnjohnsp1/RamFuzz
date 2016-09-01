#include "fuzz.hpp"

int main() {
  C c;
  ramfuzz::RF__C rc(c);
  for (auto m : rc.meth_roulette)
    (rc.*m)();
  if (c.sum != 32)
    return 1;
  else
    return 0;
}
