#include "stats.h"
#include "math.h"

struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    float data[setlength];
    float minData = 0;
    float maxdata = 0;
    static int totalValue = 0;
    s.average = 0;
    s.min = 0;
    s.max = 0;
    
   memcpy(&data[0],numberset,setlength);
    
   for( int  i =0 ;i <setlength;i++)
    {
       /* total sum computation */
       totalValue += data[i];
       /* max value computation*/
       if(maxData< data[i])
       {
           maxData = data[i];
       }
       /* min value computation*/
       if(minData> data[i])
       {
           minData = data[i];
       }   
    }
    s.average = totalValue/setlength;
    s.min = minData;
    s.max = maxData;    
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
