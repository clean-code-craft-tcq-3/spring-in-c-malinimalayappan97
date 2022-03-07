#include <stdio.h>
#include "Stats1.h"

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;


int emailAlerter()
{
    emailAlertCallCount = 1;
    return emailAlertCallCount;
}

int ledAlerter()
{
    ledAlertCallCount = 1;
    return ledAlertCallCount;
}
