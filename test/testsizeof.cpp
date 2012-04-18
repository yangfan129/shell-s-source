/*
 * =====================================================================================
 *
 *       Filename:  testsizeof.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/17/12 14:09:11
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Heaven (), zhanwenhan@163.com
 *        Company:  NDSL
 *
 * =====================================================================================
 */

#include <iostream>

typedef struct  student
{
    int idata ;
    struct stdent *next;

}Stu;

void fun(int b[100]);

int main()
{
    int *p = NULL;

    Stu st;
    
    std::cout <<"sizeof(p):      " <<sizeof(p) << std::endl;
    std::cout <<"sizeof(*p):     " <<sizeof(*p) << std::endl;

    int a[100];
    std::cout <<"sizeof(a):      " <<sizeof(a) << std::endl;
    std::cout <<"sizeof(a[100]): " <<sizeof(a[100]) << std::endl;
    std::cout <<"sizeof(&a):     " <<sizeof(&a) << std::endl;
    std::cout <<"sizeof(&a[0]):  " <<sizeof(&a[0]) << std::endl;

    fun(a);

}

int b[100];
void fun(int b[100])
{
    std::cout <<"sizeof(b):      " <<sizeof(b) << std::endl;;
}
