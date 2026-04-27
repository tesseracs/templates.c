#include "report.h"

int main(void) {
    const Check checks[] = {
        {"Config loaded", 3, 3},
        {"Database migrations", 2, 3},
        {"Smoke tests", 0, 2},
    };

    report_print("Tesseracs C starter", checks, sizeof(checks) / sizeof(checks[0]));
    return 0;
}
