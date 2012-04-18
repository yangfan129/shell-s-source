/*
 * =====================================================================================
 *
 *       Filename:  product.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/18/12 11:29:04
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Heaven (), zhanwenhan@163.com
 *        Company:  NDSL
 *
 * =====================================================================================
 */

#include <iostream>

class product
{
    public:
        virtual ~product();

        product();
};


class Apple: public product
{
    public:
        ~Apple();
        Apple();
};
