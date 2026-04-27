#ifndef TESSERACS_REPORT_H
#define TESSERACS_REPORT_H

#include <stddef.h>

#include "check.h"

void report_print(const char *service_name, const Check *checks, size_t check_count);

#endif
