#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int
main(void)
{
  printf("settickets(50) = %d (expect 0)\n", settickets(50));
  printf("settickets(0)  = %d (expect -1)\n", settickets(0));
  printf("settickets(-5) = %d (expect -1)\n", settickets(-5));
  exit(0);
}
