#include<stdio.h>
#include<stdlib.h>

int main()
{
    #ifdef _WIN32
        printf("Project is running on windows platform\n");
    #else
        printf("Project is running on Linux / Macos platform\n");
    #endif
        

    return 0;
}