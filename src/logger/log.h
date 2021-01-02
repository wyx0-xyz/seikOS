#ifndef _SEIKO_LOGGER_
#define _SEIKO_LOGGER_

#define INFO 1
#define DEBUG 2
#define WARNING 3
#define ERROR 4

void log(int status, const char *message);

#endif