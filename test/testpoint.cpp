/*
 * =====================================================================================
 *
 *       Filename:  testpoint.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/16/12 11:11:51
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Heaven (), zhanwenhan@163.com
 *        Company:  NDSL
 *
 * =====================================================================================
 */

#include <iostream>

char* GetString1()
{
    char p[] = "Hello World";
    return p;
}

char* GetString2()
{
    char *p = "Hello World";
    return p;
}

int main(int argc, char* argv[])
{
    std::cout << GetString1() << std::endl;
    std::cout << GetString2() << std::endl;

    return 0;
}
