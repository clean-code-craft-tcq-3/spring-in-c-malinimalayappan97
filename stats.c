#include <stdio.h>
#include "stats.h"
#include <math.h>

extern int emailAlerter();
extern int ledAlerter();


Stats compute_statistics(const float* numberset, int setlength) {
    Stats s;
    float minData = numberset[0];
    float maxData = numberset[0];
    float totalValue = 0.0;
    s.average = 0.0;
    s.min = 0.0;
    s.max = 0.0;
    
   
    
   for( int  i =0 ;i <setlength;i++)
    {
       /* total sum computation */
       totalValue += numberset[i];
       /* max value computation*/
       if(maxData< numberset[i])
       {
           maxData = numberset[i];
       }
       /* min value computation*/
       if(minData> numberset[i])
       {
           minData = numberset[i];
       }   
    }
    s.average = totalValue/setlength;
    s.min = minData;
    s.max = maxData;  
    
     if(0 == setlength)
    {
     s.average = __FLT_HAS_QUIET_NAN__;
     s.min = __FLT_HAS_QUIET_NAN__;
     s.max = __FLT_HAS_QUIET_NAN__; 
    }
    
    return s;
}
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], Stats computedStats)
{
    if(computedStats.max > maxThreshold)
    {
        
        emailAlertCallCount = alerters[0]();
        ledAlertCallCount = alerters[1]();
        
    }
}


