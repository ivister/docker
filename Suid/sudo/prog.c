#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
   //setuid( 4444 );
   int realId, effId;
   realId = getuid();
   effId = geteuid();
   fprintf(stdout, "Real uid is: %d\n", realId);
   fprintf(stdout, "Effective uid is: %d\n", effId);
   //system( "./suid_scr.sh" );
   return 0;
}
