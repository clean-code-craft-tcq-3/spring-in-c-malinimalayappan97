#include "stats.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    float data[setlength];
    float minData = 0;
    float maxdata = 0;
    static int totalValue = 0;
    s.average = 0;
    s.min = 0;
    s.max = 0;   
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
