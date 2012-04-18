/*
 * =====================================================================================
 *
 *       Filename:  Singleton.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/18/12 15:58:39
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Heaven (), zhanwenhan@163.com
 *        Company:  NDSL
 *
 * =====================================================================================
 */

#include "Singleton.h"


Singleton::Singleton()
{

}

Singleton::~Singleton()
{

}

Singleton* Singleton::instance = 0;

Singleton* Singleton::Instance()
{
    if(instance == 0)
    {
        instance = new Singleton();
    }

    return instance;

}
