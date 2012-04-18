/*
 * =====================================================================================
 *
 *       Filename:  testmkdir.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  03/28/12 10:22:57
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


int fileSize(char fileName[]);

typedef struct fileinfo
{
    char name[256];
    char fullName[1024];
    int size;
    char *mod_time;
    char type[10];
}fileinfo;

typedef struct filelist
{
    fileinfo file;
    struct filelist* nextfile;
}fileList;

fileList* getFileList(char name[1024])
{
    fileList *head=NULL;
    fileList *cur=NULL;
    char name_temp[1024];
    
    DIR *dir;

    struct dirent *dir_env;
    struct stat stat_file;

    head=(fileList*)malloc(sizeof(fileList));
    head->nextfile=NULL;

    dir=opendir(name);

    while(dir_env=readdir(dir))
    {
        if(strcmp(dir_env->d_name,".") == 0 || strcmp(dir_env->d_name,"..") == 0)
            continue;

        /*
        strcpy(name_temp, name);
        strcat(name_temp, dir_env->d_name);


        //strcat(name_temp, dir_env->d_name);

        stat(name_temp, &stat_file);

        cur = (fileList*)malloc(sizeof(fileList));

        strcpy(cur->file.name, dir_env->d_name);
        strcpy(cur->file.fullName, name_temp);

        */

        /*
        if(S_ISDIR(stat_file.st_mode))
        {
            //cur->file.size = 0;
            //strcpy(cur->file.type, "mulu");
            //strcat(cur->file.fullName, "/");
        }else
        {
            //cur->file.size = stat_file.st_size;
            //strcpy(cur->file.type, "file");
        }
        */

        //cur->file.mod_time = ctime(&stat_file.st_mtime);

        printf("test-%s--\n", dir_env->d_name);
       
        std::cout << "test----->" << dir_env->d_name << std::endl;
        /*


        if(head->nextfile == NULL)
        {
            head->nextfile = cur;
            cur->nextfile = NULL;

        }else
        {
            cur->nextfile = head->nextfile;
            head->nextfile = cur;
        }

        */
    }

    return head;


}

void showAllNode(fileList *head)
{
    fileList *temp;

    int i = 0, j = 0;
    fileList *headArray[1024];

    if(head == NULL)
        return;

    printf("%s", head->file.fullName);
    printf("\n");

    temp = head->nextfile;

    while(temp)
    {
        if(strcmp(temp->file.type, "file") == 0)
        {
            printf("file:%s\n", temp->file.fullName);
        }else{
            if(i >= 1024)
            {
                printf("there are too many directory\n");
                return;
            }

            headArray[i] = getFileList(temp->file.fullName);
            strcpy(headArray[i]->file.fullName, temp->file.fullName);
            i++;

        }

        temp = temp->nextfile;
    }

    for(j = 0; j < i; j++)
            showAllNode(headArray[j]);

    return;
}

void showList(fileList *head)
{
    if(head == NULL)return;

    while(head)
    {
        printf("%s\n", head->file.fullName);
        head = head->nextfile;
    }

    return;
}

int main(int argc, char* argv[])
{
    fileList *mylist;

    char name[1024] = "/home/shell-s-source/dirinfo/";

    if(argc == 2)
        strcpy(name, argv[1]);
    else
        strcpy(name, "/home/shell-s-source/dirinfo/");

    mylist = getFileList(name);
    strcpy(mylist->file.fullName, name);

    showAllNode(mylist);
    printf("\n");

    return 0;
}
