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
    //cout << "����"<<endl;
   // cout<<p;
    system(p);
    getch();
    time_end=clock();
    cout << "����ʱ�ӣ�"<<time_end-time_start <<"ms"<< endl;
    i++;
      }
    return 0;

}
/*
0=��ɫ
1=��ɫ
2=��ɫ
3=����ɫ
4=��ɫ
5=��ɫ
6=��ɫ
7=��ɫ
8=��ɫ
9=����ɫ
A=����ɫ
B=��ǳ��ɫ
C=����ɫ
D=����ɫ
E=����ɫ
F=����ɫ*/
