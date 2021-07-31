//this was the code for snake incomplete!!!!!!!!//sss
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int lenght = 20,width = 100,i,j;
int headX,headY,foodX,foodY,score,gameover,flag = 0;
void setting(){
    headX = lenght/2;
    headY = width/2;

    point1 :
    foodX = rand() % 20;
    if(foodX == 0){
        goto point1;
    }
    point2 :
    foodY = rand() % 100;
    if(foodY == 0){
        goto point2;
    }
}
void draw(){
    system("cls");
    for(i=0;i<lenght;i++){
        for(j=0;j<width;j++){
            
            if(i==0 || i==lenght - 1){
                printf("-");
            }
            else if(j == 0 || j==width - 1){
                printf("|");
            }
            else{
                if(i == headX && j == headY ){
                    printf("=");
                }
                else if(i == foodX && j == foodY ){
                    printf("*");
                }
                else {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}

void inputt(){
    if(kbhit()){
        switch (getch())
        {
        case '8':
            flag = 1;
            break;
        case '4' :
            flag = 2;
            break;
        case '6' :
            flag = 3;
            break;
        case '5' :
            flag = 4;
            break;
        case '0' :
            gameover = 1;
            break;
        default:
            break;
        }
    }
}

void logic(){
    switch (flag)
    {
    case 1:
        headX--;
        break;
    case 2:
        headY--;
        break;
    case 3:
        headY++;
        break;
    case 4:
        headX++;
        break;
    
    default:
        break;
    }
}
int main()
{
    setting();


        draw();
        inputt();
        logic();

    
    return 0;
}