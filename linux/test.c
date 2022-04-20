//printf字体、背景颜色修改，只适用于Linux，Windows下无效
#include<stdio.h>
int main()
{
    printf("\033[32;5m 字符串闪耀\033[0m\r\n");
    printf("\033[5m 字符串闪耀\033[0m\n");
    printf("\033[4m 下划线\033[0m\n");
    printf("\033[1;33m printf不一样的玩法. \033[0m \n");  //

    printf("\033[1;33m 字体颜色:\n");
    printf("\033[0m none:\n");
    printf("\033[0;30m back:\n");
    printf("\033[1;30m dark_back:\n");
    printf("\033[0;34m blue:\n");
    printf("\033[1;34m light_blue:\n");
    printf("\033[0;32m green:\n");
    printf("\033[1;32m light_green:\n");
    printf("\033[0;36m cyan:\n");
    printf("\033[1;36m light_scan:\n");
    printf("\033[0;31m red:\n");
    printf("\033[1;31m light_read:\n");
    printf("\033[0;35m purple:\n");
    printf("\033[1;35m light_purple:\n");
    printf("\033[0;33m yellow:\n");
    printf("\033[1;33m light_yellow:\n");
    printf("\033[0;37m white:\n");
    printf("\033[1;37m light_white:\n");

    printf("\033[1;33m 背景颜色:\n");
    printf("\033[0m none:\033[0m\n");
    printf("\033[0;40m back:\033[0m\n");
    printf("\033[0;44m blue:\033[0m\n");
    printf("\033[0;42m green:\033[0m\n");
    printf("\033[0;46m cyan:\033[0m\n");
    printf("\033[0;41m red:\033[0m\n");
    printf("\033[0;45m purple:\033[0m\n");
    printf("\033[0;43m brown:\033[0m\n");
    printf("\033[0;47m light_yellow:\033[0m\n");

    printf("\033[1;33m 背景字体颜色:\033[0m\n");
    printf("\033[47;31m Hello Linux\033[?25l");
    //47是字背景颜色, 31是字体的颜色, Hello Linux是字符串. 后面的\033[?25l是控制码：用来隐藏光标.
    printf("\033[0m");
    return 0;
}


/*#include<stdio.h>
#include<string.h>
#include<unistd.h>
int main()
{
    char str[101];
    int i;
    memset(str,0,101);
    char lable[4] = {'|','/','-','\\'};//\\转义字符
    for(i = 0; i < 101; i++)
    {
        printf("\033[44;31m [%-100s][%d%%][%c]\033[0m\r",str,i,lable[i%4]);
        fflush(stdout);
        str[i]='#';
       usleep(40000);//400ms/0.4s
    }
    printf("\n");
    return 0;
}
*/

/*
#include<stdio.h>
int main()
{
    printf("\033[32;5m 字符串闪耀\033[0m\r\n");
    printf("\033[5m 字符串闪耀\033[0m\n");
    printf("\033[4m 下划线\033[0m\n");
    printf("\033[1;33m printf不一样的玩法. \033[0m \n");  //

    printf("\033[1;33m 字体颜色:\n");
    printf("\033[0m none:\n");
    printf("\033[0;30m back:\n");
    printf("\033[1;30m dark_back:\n");
    printf("\033[0;34m blue:\n");
    printf("\033[1;34m light_blue:\n");
    printf("\033[0;32m green:\n");
    printf("\033[1;32m light_green:\n");
    printf("\033[0;36m cyan:\n");
    printf("\033[1;36m light_scan:\n");
    printf("\033[0;31m red:\n");
    printf("\033[1;31m light_read:\n");
    printf("\033[0;35m purple:\n");
    printf("\033[1;35m light_purple:\n");
    printf("\033[0;33m yellow:\n");
    printf("\033[1;33m light_yellow:\n");
    printf("\033[0;37m white:\n");
    printf("\033[1;37m light_white:\n");


    printf("\033[1;33m 背景颜色:\n");
    printf("\033[0m none:\033[0m\n");
    printf("\033[0;40m back:\033[0m\n");
    printf("\033[0;44m blue:\033[0m\n");
    printf("\033[0;42m green:\033[0m\n");
    printf("\033[0;46m cyan:\033[0m\n");
    printf("\033[0;41m red:\033[0m\n");
    printf("\033[0;45m purple:\033[0m\n");
    printf("\033[0;43m brown:\033[0m\n");
    printf("\033[0;47m light_yellow:\033[0m\n");

    printf("\033[1;33m 背景字体颜色:\033[0m\n");
    printf("\033[47;31mhello world\033[?25l");
    //47是字背景颜色, 31是字体的颜色, hello world是字符串. 后面的\033[?25l是控制码：用来隐藏光标.
    printf("\033[0m");
    getchar();
    return 0;
}
*/
/*#include<stdio.h>
#include<unistd.h>
int main()
{
    int i;
    for(i = 10;i >= 0 ; i--)
    {
        printf("%2d\r",i);
        fflush(stdout);
        sleep(1);
    }
    return 0;
}*/

/*#include<stdio.h>
#include<unistd.h>
int main()
{
    printf("Hello Linux,Hello Makeflie");
    fflush(stdout);
    sleep(3);
    return 0;
}*/

/*#include<stdio.h>
int main()
{
    void Print();//This is a statement 
    int i;
    for(i = 0;i < 100 ;i++)
    {
        printf("%d\n",i);
    }
    void (*p)();//define a pointer to function --- Print
    p = Print;
    p();// equel to Print()
    (*p)();// equel to Print()
    return 0;
}
void Print()
{
    printf("************************\n");
    printf("This is a test to debug!\n");
    printf("************************\n");
}*/

