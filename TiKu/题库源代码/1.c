#include "stdio.h"
#include <stdlib.h>
main()
{
  int x,y,z;  
  for(x=0;x<10;x++)
    for(y=0;y<10;y++)
    {
      if(y==x) continue;
      for(z=0;z<10;z++)
      {      
      if(z==x||z==y) continue;
      
      if(1111*(x+y+z)==y*10000+1110*x+z)
      {
        printf("x=%d,y=%d,z=%d\n",x,y,z);
        
        printf("%d+%d+%d=%d\n",1111*x,1111*y,1111*z,1111*(x+y+z));
        printf("MrFlySand");
        exit(0);
      }
	  
    }
  }

}

