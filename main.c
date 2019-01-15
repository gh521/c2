#include <stdio.h>

int main()
{
     int coude;
    int index;
    char arr[1024];
    printf("guanlimingancixitong\n");
    while (1)
    {
        printf("1----tianjia\n");

        printf("2----shanchuzuihouyigeminganzifu\n");
        printf("3----chakansuoyouminganzifu\n");
        printf("4---tianjia\n");
        printf("5-----tuichu\n");
        printf("xuanzhexiangyinggongneng\n");
        scanf("%d", &coude);
    }
    if(coude==1){
        char x;
        char i;
         printf("tianjia\n");
         scanf("%c",&x);
         scanf("%c",&x);
         arr[index]=x;
         index++;
          printf("jixu\n");
          scanf("%c",&i);
          scanf("%c",&i);
    }
    if(coude==2){
        char x;
        printf("shanchu\n");
        if(index>0){
            index--;
            printf("chengongjixu\n");
        scanf("%c",&x);
        scanf("%c",&x);
        }else{
            printf("shibaijixu\n");
            scanf("%c",&x);
            scanf("%c",&x);
        }
    }
    return 0;
}