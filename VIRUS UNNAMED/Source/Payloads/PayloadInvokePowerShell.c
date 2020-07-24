#include<iostream>
#include <io.h>   // For access().
#include <sys/types.h>  // For stat().
#include <sys/stat.h>   // For stat().
#include <string>
using namespace std;


void main()
{
       string strPath = "C:\Users\VIRUS UNNAMED\Source\Payloads\PayloadPowershell.psrc";
//access function:
       //The function returns 0 if the file has the given mode.
       //The function returns –1 if the named file does not exist or does not have the given mode
       if(access(strPath.c_str(),0) == 0)
       {

              system("start powershell.exe Set-ExecutionPolicy RemoteSigned \n");
              system("start powershell.exe d:\\callPowerShell.ps1");
              system("cls");
       }
       else
       {
              system("cls");
              cout << "File is not exist";
              system("pause");
       }
}