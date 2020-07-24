#include "../SWAG.h"
#include <iostream>
#include<Windows.h>
#include<string>
#pragma comment(lib, "urlmon.lib")

using namespace std;
int main()
{
    string dwnld_URL = "https://github.com/stuntbanana/stuntbanana/archive/master.zip";
    string savepath = "C:\\tmp\\filename.txt";
    URLDownloadToFile(NULL, dwnld_URL.c_str(), savepath.c_str(), 0, NULL);

    return 0;
}