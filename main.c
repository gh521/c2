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
        printf("4---tihuan\n");
        printf("5-----tuichu\n");
        printf("xuanzhexiangyinggongneng\n");
        scanf("%d", &coude);
    }
    if (coude == 1)
    {
        char x;
        char i;
        printf("tianjia\n");
        scanf("%c", &x);
        scanf("%c", &x);
        arr[index] = x;
        index++;
        printf("jixu\n");
        scanf("%c", &i);
        scanf("%c", &i);
    }
    if (coude == 2)
    {
        char x;
        printf("shanchu\n");
        if (index > 0)
        {
            index--;
            printf("chengongjixu\n");
            scanf("%c", &x);
            scanf("%c", &x);
        }
        else
        {
            printf("shibaijixu\n");
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (coude == 3)
        {
            char x;
            if (index > 0)
            {
                for (int v = 0; v < index; v++)
                {
                    printf("di %d gezifu%c\n", v + 1, arr[v]);
                }
            }
            else
            {
                printf("wu");
            }
            printf("jixu\n");
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (coude == 4)
        {
            printf("qingshuruyiduanyingwen\n");
            char content[1024];
            scanf("%s", content);
            for (int i = 0; 1; i++)
            {
                if (content[i] == '\0')
                {
                    break;
                }

                if (ismingan(arr[i] == 1))
                {
                    content[i] = '*';
                }
                printf("%c", content[i]);
            }
            printf("\n");
            printf("tihuanwancdianjihuichejix\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (coude == 5)
        {
            printf("tuichu\n");
            break;
        
        }
    }
    return 0;
}