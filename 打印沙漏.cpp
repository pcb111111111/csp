#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
using namespace std;
#define _for(a,b,i) for(int i=a;i<b;i++)//宏定义for循环

int main(){
    int h;
    scanf("%d",&h);
    char a[h][h];
    _for(0,h,i)
        _for(0,h,j)
            a[i][j]=' ';
    int l=2*h-1;int space=-1;
    _for(0,l,i){//由i控制打印的空格的数量
        if(i < h)
            space++;
        else if(i >=h)
            space--;
        _for(0,space,j)//打印前端空格
            cout<<' ';
        _for(0,l-2*space,j){//打印 * ，*和空格交替分布
            if((j+1)%2 == 1)
                cout<<'*';
            else
                cout<<' ';
        }
        _for(0,space,j)//打印后端空格
            cout<<' ';

        cout<<endl;
    }

    return 0;
}
