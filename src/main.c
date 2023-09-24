/**
*  @file   main.c
*  @brief  Application entry file
*
*  @author Mikhail Zaytsev
*  @date   20230924
*/

/** Includes */

#include <zephyr/kernel.h>
#include <stdint.h>

/** Public functions */

/**
*  @brief   Application entry point
*
*  @return  int32_t Errno code
*/
int32_t main(void)
{
    printk("Hello, World\n");
    return 0;
}
