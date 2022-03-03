#include "stats.h"
int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

Stats compute_statistics(const float* numberset, int setlength) {
    Stats s;
    float data[setlength];
    float minData = 0;
    float maxData = 0;
    static int totalValue = 0;
    s.average = 0;
    s.min = 0;
    s.max = 0;
   
    
    for( int  i =0 ;i <setlength;i++)
    {
       /* total sum computation */
       totalValue += *numberset[i];
       /* max value computation*/
       if(maxData< *numberset[i])
       {
           maxData = *numberset[i];
       }
       /* min value computation*/
       if(minData> *numberset[i])
       {
           minData = *numberset[i];
       }   
    }
    s.average = totalValue/setlength;
    s.min = minData;
    s.max = maxData;  
    
    return s;
}

void emailAlerter()
{
    emailAlertCallCount = 1;
}


void ledAlerter()
{
    ledAlertCallCount = 1;
}


