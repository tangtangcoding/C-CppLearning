//五子棋小游戏
#include <iostream>
#include <bits/stdc++.h>
#include <stdlib.h>
#include <unistd.h>
using namespace std;
static int edge = 15;
char panel[15][15];
int _panel_[15][15];
void initPanel(int _psize){
     for(int i=0;i<_psize;i++)
        for(int j=0;j<_psize;j++){
            _panel_[i][j] = 2;
            panel[i][j] = '.';
        }
}

void outputPanel(int Psize){
    printf("\t\t\t\t\t\t------------------------------------------------\n");
    printf("\t\t\t\t\t\t\t\t五子棋大战\n");
    printf("\n");
    printf("\t\t\t\t\t\t");
    for(int i=0;i<=Psize;++i){
        if(i<9) printf("%d  ",i);
        else printf("%x  ",i);
    }
    printf("\n");
    //输出键盘
    for(int i=0;i<Psize;++i){
        printf("\t\t\t\t\t\t");
        if(i<9)
        {
            printf("%d  ",1+i);
        }
        else
        {
            printf("%x  ",i+1);
        }
        for(int j=0;j<Psize;++j){
            printf("%c  ",panel[i][j]);
        }
        printf("\n");
    }
     printf("\n");
}

int judgeGame(int psize,int flag,int posX,int posY)//判断是否结束
{
   int distance = psize - 4;
   int t = 0;
   //纵向判断
   for(int i=0;i<distance;++i){
       while(i<distance && _panel_[i][posY] == flag){
            if(++t == 5) return 1;
            ++i;
       }
        t = 0;
   }

   //横向判断
   t = 0;
   for(int i=0;i<distance;++i){
       while(i<distance && _panel_[posX][i] == flag){
           if(++t == 5) return 1;
           ++i;
       }
       t = 0;
   }

   //斜判断
   //左上到右下
   t = 0;       
   int begin = posX < posY ? posX : posY;
   int beginX = posX - begin ;
   int beginY = posY - begin ;
    for(;beginX<distance,beginY<distance;++beginX,++beginY){
        if(_panel_[beginX][beginY] == flag && _panel_[beginX+1][beginY+1] == flag && _panel_[beginX+2][beginY+2] == flag &&
        _panel_[beginX+3][beginY+3] == flag && _panel_[beginX+4][beginY+4] == flag){
            return 1;
        }
    }
    //左下到右上
    // beginX = posX - begin;
    // beginY = posY - begin;
    //  for(;beginX<distance,beginY<distance;++beginX,++beginY){
    //     if(_panel_[beginX][beginY] == flag && _panel_[beginX+1][beginY+1] == flag && _panel_[beginX+2][beginY+2] == flag &&
    //     _panel_[beginX+3][beginY+3] == flag && _panel_[beginX+4][beginY+4] == flag){
    //         return 1;
    //     }
    // }
   return 0;
}

void play(int x,int y,int flag){
    panel[x][y] = (flag==1)?'#':'@';
    _panel_[x][y] = flag;
}


int main(int argc, char const *argv[])
{
    int32_t _psize = sizeof(panel) / sizeof(panel[0]);
    initPanel(_psize);
    outputPanel(_psize);
    int x,y;
    int flag = 1;
    while(cin >> x >> y){
        flag = flag xor 1;
       
        play(--x,--y,flag);//下棋
        //判断输赢
        if(judgeGame(_psize,flag,x,y) == 1){
            cout << "your win!" <<endl;
            break;
        }
        std::system("clear");
        outputPanel(_psize);
        printf(flag==1?"我方下棋:\n":"电脑下棋:\n");
    }
    return 0;
}

