#include "zufall.h"
#include <random>

int zufall(int min, int max){
  std::random_device rd;
  return (rd() % (max-min+1))+min;
}