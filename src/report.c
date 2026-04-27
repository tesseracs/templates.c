#include <stdio.h>

#include "report.h"

void report_print(const char *service_name, const Check *checks, size_t check_count) {
    size_t ready_count = 0;
    size_t attention_count = 0;
    size_t blocked_count = 0;

    printf("%s\n", service_name);
    printf("====================\n");

    for (size_t i = 0; i < check_count; ++i) {
        CheckStatus status = check_evaluate(&checks[i]);
        size_t percent = check_completion_percent(&checks[i]);

        if (status == CHECK_STATUS_READY) {
            ++ready_count;
        } else if (status == CHECK_STATUS_ATTENTION) {
            ++attention_count;
        } else {
            ++blocked_count;
        }

        printf(
            "- %-20s %3zu%% complete (%s)\n",
            checks[i].name,
            percent,
            check_status_label(status)
        );
    }

    printf(
        "\nSummary: %zu ready, %zu needs attention, %zu blocked\n",
        ready_count,
        attention_count,
        blocked_count
    );
}
