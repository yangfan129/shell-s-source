/*
 * =====================================================================================
 *
 *       Filename:  Singleton.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/18/12 15:47:39
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Heaven (), zhanwenhan@163.com
 *        Company:  NDSL
 *
 * =====================================================================================
 */


#include <iostream>

class Singleton
{
    public:
        static Singleton* Instance();
        ~Singleton();

    private:
        Singleton();

        static Singleton* instance;

};
