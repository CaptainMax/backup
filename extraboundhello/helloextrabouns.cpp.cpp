#include <iostream>
#include <string>

#ifdef _WIN32
    #include<Windows.h>
#else
    #include <unistd.h>
    #include <pwd.h>
#endif

std::string getUserName()
{



#if defined _WIN32  //windows system
    const int MAX_LEN = 100;
    char szBuffer[MAX_LEN];
    DWORD len = MAX_LEN;
    if( GetUserName(szBuffer, &len) )
        return szBuffer;

#else  //Linux or Unix
    uid_t userid;
    struct passwd* usid;
    userid=getuid();
    usid=getpwuid(userid);
    return usid->pw_name;
#endif
}

int main()
{
    std::string username = getUserName();
    std::cout << username << std::endl;
    return 0;
}
