#ifndef FUNCLIB_CPP
#define FUNCLIB_CPP

#include "funcLib.h"

void funcLib(void)

{
        volatile unsigned int i;	// volatile to prevent optimization

        i = 10000;					// SW Delay
		do i--;
		while(i != 0);
}

#endif