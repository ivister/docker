#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main()
{
   setuid( 4444 );
   system( "/suid_scr.sh" );

   return 0;
}
