/*
 * =====================================================================================
 *
 *       Filename:  testfunc.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/10/12 14:04:31
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Heaven (), zhanwenhan@163.com
 *        Company:  NDSL
 *
 * =====================================================================================
 */
#include <iostream>

int func(int tmp)
{

    int xt = (tmp % 6);
    std::cout << xt << std::endl;

    //tmp&&func(tmp - 1);

    return 0;
}

int
main(void)
{
    func(35);


}
