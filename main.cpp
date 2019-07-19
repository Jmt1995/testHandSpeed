#include <iostream>
#include <random>
#include<stdio.h>
#include<conio.h>
#include<cstdlib>
#include <windows.h>

#include<ctime>
using namespace std;
using std::cout; using std::endl;
using std::default_random_engine;
clock_t time_start,time_end;
int main()
{
    char cloor_list[]={'0','1','2','3','4','6','8','9'};
    default_random_engine e;

    int i=5;

   while(1){
    Sleep(3000);
    string str = "color ";
    str = str + cloor_list[i%8]+"7";
    const char *p = str.c_str();
    time_start=clock();
    //cout << "按键"<<endl;
   // cout<<p;
    system(p);
    getch();
    time_end=clock();
    cout << "手速时延："<<time_end-time_start <<"ms"<< endl;
    i++;
      }
    return 0;

}
/*
0=黑色
1=蓝色
2=绿色
3=湖蓝色
4=红色
5=紫色
6=黄色
7=白色
8=灰色
9=淡蓝色
A=淡绿色
B=淡浅绿色
C=淡红色
D=淡紫色
E=淡黄色
F=亮白色*/
