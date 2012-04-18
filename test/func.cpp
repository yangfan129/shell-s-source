/*
 * =====================================================================================
 *
 *       Filename:  func.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/16/12 11:06:43
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Heaven (), zhanwenhan@163.com
 *        Company:  NDSL
 *
 * =====================================================================================
 */

#include <iostream>

class A
{
    public:
        virtual void Fun(int number = 10)
        {
            std::cout << "A::Fun with number" << number;
        }

};

class B: public A
{
    public:
        virtual void Fun(int number = 20)
        {
            std::cout << "B::Fun" << number;
        }
};

int main()
{
    B b;
    A &a = b;
    a.Fun();
}
