#include "types.h"
#include "riscv.h"
#include "param.h"
#include "spinlock.h"
#include "defs.h"
#include "sysinfo.h"
#include "proc.h"

// Get current system info
// addr is a user virtual address, pointing to a struct sysinfo.
int
systeminfo() {
  
printf("\n\nsysinfo system call prints:\n");
  int freememory = freemem();
  int no_of_proc = nproc();
  printf("free-memory %d bytes\n",freememory);
  printf("nproc   : %d\n\n",no_of_proc);
  return 0;
}