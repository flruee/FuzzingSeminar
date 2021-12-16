#include "xxhash.h"
#include <iostream>
#include <time.h>;
main() {

  // anything else here, e.g. command line arguments, initialization, etc.


                                                 // and before __AFL_LOOP!
  clock_t begin = clock();
  int seed = 0; // maybe change seed input as well
  int iteration = 10000;
  int i = 0;
  while (i < iteration) {

    unsigned char string[] = "ladidaaa"; 
    unsigned char *buf = &string[0];
    int len = 9;
    /* Setup function call, e.g. struct target *tmp = libtarget_init() */
    /* Call function to be fuzzed, e.g.: */
    XXH64_hash_t hash = XXH64(buf, len, seed);
    /* Reset state. e.g. libtarget_free(tmp) */
    i++;
  }
  clock_t end = clock();
  double time_spent = (double)(end-begin) / CLOCKS_PER_SEC;
  std::cout << "The time is: " << time_spent<<std::endl; 
  return 0;

}
