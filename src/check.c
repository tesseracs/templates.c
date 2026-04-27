#include "check.h"

CheckStatus check_evaluate(const Check *check) {
    if (check == NULL || check->total_steps <= 0) {
        return CHECK_STATUS_BLOCKED;
    }

    if (check->completed_steps >= check->total_steps) {
        return CHECK_STATUS_READY;
    }

    if (check->completed_steps > 0) {
        return CHECK_STATUS_ATTENTION;
    }

    return CHECK_STATUS_BLOCKED;
}

const char *check_status_label(CheckStatus status) {
    switch (status) {
        case CHECK_STATUS_READY:
            return "ready";
        case CHECK_STATUS_ATTENTION:
            return "attention";
        case CHECK_STATUS_BLOCKED:
            return "blocked";
        default:
            return "unknown";
    }
}

size_t check_completion_percent(const Check *check) {
    if (check == NULL || check->total_steps <= 0 || check->completed_steps <= 0) {
        return 0;
    }

    if (check->completed_steps >= check->total_steps) {
        return 100;
    }

    return (size_t)((check->completed_steps * 100) / check->total_steps);
}
