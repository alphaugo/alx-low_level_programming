#ifndef _MAINH_
#define _MAINH_
#include <stdlib.h>
#include <sys/types.h>
#include <sys/state.h>
#include <fcntl.h>
#include <unistd.h>

ssize_t read_textfile(const char *filename, size_t letters);

#endif
