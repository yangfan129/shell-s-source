/*
 * =====================================================================================
 *
 *       Filename:  factory.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/18/12 11:37:49
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Heaven (), zhanwenhan@163.com
 *        Company:  NDSL
 *
 * =====================================================================================
 */

#include "product.h"

class Factory
{
    public:
        virtual ~Factory() = 0;

        virtual product* CreateApple() = 0;

        Factory();
};


class CreateProduct:public Factory
{
    public:


        ~CreateProduct();

        CreateProduct();

    public:
        product* CreateApple();

};
