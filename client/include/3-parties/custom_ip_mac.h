#ifndef _CUSTOM_IP_MAC_H_
#define _CUSTOM_IP_MAC_H_

#include <stdio.h>
#include <stdbool.h>

//--------------------------------------------------------------------------
// the color of printf
#define P_NONE "\033[m"
#define P_RED "\033[0;32;31m"
#define P_GREEN "\033[0;32;32m"
//--------------------------------------------------------------------------

// Defininition
void test_main();

// Implementation
inline void test_main()
{
    printf("Hi from ip mac\n");
}

#endif