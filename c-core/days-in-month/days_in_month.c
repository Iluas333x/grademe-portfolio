#include <unistd.h>
int days_in_month(  int year,int month){
    if (month >= 1 && month <= 12)
    {
        if (month == 2 )
        {
           if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
            {
    return 29;
            }else{
                 return 28;
            }
        
        }
        else if (month == 4 || month == 6 || month == 9 || month == 11)
        {
           return 30;
        }
        else
        {
              return 31;
        }
    }
    else
    {
        return -1;
    }

}

