
#include <sys/types.h>

extern off_t lseek64(int a, off_t b, int c);

  off_t lseek(int a, off_t b, int c) {
    return lseek64 (a, b, c);
  }

  int fstat64(int a, struct stat* b);
  int fstat(int a, struct stat* b) {
    return fstat64(a,b);
  }

  void *__dso_handle = 0;
