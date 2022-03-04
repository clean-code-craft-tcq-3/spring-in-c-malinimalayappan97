#include "stats.h"
#include <stdio.h>

extern int emailAlerter();
extern int ledAlerter();


Stats compute_statistics(const float* numberset, int setlength) {
    Stats s;
    float minData = 0;
    float maxData = 0;
    static int totalValue = 0;
    s.average = 0;
    s.min = 0;
    s.max = 0;
    
   
    
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
    
     if(0 ==setlength)
    {
         s.average = NAN;
    s.min = NAN;
    s.max = NAN; 
    }
    
    return s;
}
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], Stats computedStats)
{
    if(s.max > maxThreshold)
    {
        
        emailAlertCallCount = alerters[0]();
        ledAlertCallCount = alerters[1]();
        
    }
}


