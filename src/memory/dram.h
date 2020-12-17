#ifndef dram_guard
#define dram_guard
#include <stdlib.h>
#include <stdint.h>

#define MM_LEN 1000

uint8_t mm[MM_LEN]; // physical memory mm[paddr]

uint64_t read64bits_dram(uint64_t paddr);
void write64bits_dram(uint64_t paddr, uint64_t data);

void print_register();
void print_stack();

#endif