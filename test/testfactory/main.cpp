/*
 * =====================================================================================
 *
 *       Filename:  main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/18/12 11:47:37
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Heaven (), zhanwenhan@163.com
 *        Company:  NDSL
 *
 * =====================================================================================
 */

//#include "product.h"
#include "factory.h"

int main(void)
{
    Factory *fa = new CreateProduct(); 

    product *pr = fa->CreateApple();

    return 0;
}
