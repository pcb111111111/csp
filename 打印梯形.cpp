#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<iostream>
#include<string.h>
using namespace std;

#define _for(a,b,i) for(int i=a;i<b;i++)

int main(){
    int h,a;
    scanf("%d",&h);
    a=2*(h-1);
    _for(0,h,i){
        _for(0,2*(h-1)+h,j){
            if(j<a)
                cout<<' ';
            else
                cout<<'*';

        }
        a-=2;
        cout<<endl;
    }
    return 0;
}
