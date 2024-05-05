#ifndef DOWN_H
#define DOWN_H
#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <cstring>
#include <windows.h>
#include <urlmon.h>
#pragma comment(lib, "urlmon.lib")
using namespace std;
class down
{
public:
    /*BOOL FileExistsStatus(const CHAR* path)
    {
        DWORD dwAttribute = GetFileAttributes((LPWSTR)path);
        if (dwAttribute == 0XFFFFFFFF) {
            return false;
        }
        else {
            return true;
        }
    }
    BOOL DownloadFiles(const CHAR* url, const CHAR* downloadPath)
    //用const CHAR* 是因为LPWSTR可以强制转换
    {
        if (URLDownloadToFile(NULL, (LPWSTR)url, (LPWSTR)downloadPath, 0, 0) == S_OK && FileExistsStatus(downloadPath))
        {
            return true;
        }//如果下载成功且文件存在返回真
        else {
            return false;//反之亦然
        }
    }*/
};

#endif // DOWN_H
