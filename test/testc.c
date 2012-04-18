/*
 * =====================================================================================
 *
 *       Filename:  testc.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/16/12 11:16:23
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Heaven (), zhanwenhan@163.com
 *        Company:  NDSL
 *
 * =====================================================================================
 */

#include <stdio.h>


int main(int argc, char* argv[])
{
    char str1[] = "hello world";
    char str2[] = "hello world";

    char* str3  = "hello world";
    char* str4  = "hello world";

    if(str1 == str2)
        printf("str1 and str2 are same.\n");
    else
        printf("str1 and str2 are not same.\n");


    if(str3 == str4)
        printf("str3 and str4 are same.\n");
    else
        printf("str3 and str4 are not same.\n");

    return 0;
}
