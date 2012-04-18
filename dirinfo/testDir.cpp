/*
 * =====================================================================================
 *
 *       Filename:  testDir.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/13/12 15:27:14
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Heaven (), zhanwenhan@163.com
 *        Company:  NDSL
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <dirent.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <iostream>


int  Mkdir(const char *DirName, int xt)
{
    std::cout << "lalalla" << std::endl;
                
    if (mkdir(DirName,   xt) == -1) {
        perror("mkdir   error");
        return -1;
    }
} 



int CreateDir(const char *sPathName,int (*ptr)(const char* , int) )
{


    char   DirName[256];
    strcpy(DirName,   sPathName);
    int   i, len   =   strlen(DirName);
 
    if (DirName[len - 1] != '/') {
        strcat(DirName,   "/");
    }
 
    len   =   strlen(DirName);

    for (i = 1;   i < len;   i++) {
        if (DirName[i] == '/') {
            DirName[i]   =   0;

            if (access(DirName,   NULL) != 0) {
               int b =(int) (*ptr)(DirName,0777);
            }

            DirName[i]   =   '/';
        }

    }
    return 0;
}


int main(void)
{
    int (*mkdirs)(const char* , int);// = Mkdir(const char *DirName, int xt);
    
    mkdirs = Mkdir;

    CreateDir("/home/yf/01234567ii89", mkdirs);

}
