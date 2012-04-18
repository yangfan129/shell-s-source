/*
 * =====================================================================================
 *
 *       Filename:  factory.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/18/12 11:39:01
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Heaven (), zhanwenhan@163.com
 *        Company:  NDSL
 *
 * =====================================================================================
 */

#include "factory.h"

Factory::Factory()
{

}

Factory::~Factory()
{

}

CreateProduct::CreateProduct()
{
    std::cout << "CreateProduct()" <<std::endl;
}

CreateProduct::~CreateProduct()
{

}

product* CreateProduct::CreateApple()
{
    return new Apple();
}
