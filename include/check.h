#ifndef TESSERACS_CHECK_H
#define TESSERACS_CHECK_H

#include <stddef.h>

typedef enum CheckStatus {
    CHECK_STATUS_READY,
    CHECK_STATUS_ATTENTION,
    CHECK_STATUS_BLOCKED
} CheckStatus;

typedef struct Check {
    const char *name;
    int completed_steps;
    int total_steps;
} Check;

CheckStatus check_evaluate(const Check *check);
const char *check_status_label(CheckStatus status);
size_t check_completion_percent(const Check *check);

#endif
