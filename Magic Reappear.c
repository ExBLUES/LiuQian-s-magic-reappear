#include <stdio.h>
#include<windows.h>

void swap1(char *s, int n, int c)
{
    int q;
    switch (c)
    {
        case 0:
            q = 2;
            break;
        default:
            q = c;
            break;
    }
    int t = n + q, a = 0;
    char u = *(s + t);
    while ((*s) != u)
    {
        char p = *(s + t - a);
        *(s + t - a) = *(s + t - a - 1);
        *(s + t - a - 1) = p;
        a++;
    }
}

void swap2(char *s, int n)
{
    char t = *s;
    int z = 0;
    while ((*(s + n - 1)) != t)
    {
        char k = *(s + z);
        *(s + z) = *(s + z + 1);
        *(s + z + 1) = k;
        z++;
    }
}

int main()
{
    char s[8];
    int n = 0, j = 0;
    printf("连续输入8个字母（要求：务必包含四组字母的大小写 如ABCDabcd，其中大写字母需要连续且与小写字母分开（如示例中ABCD就是连续的且ABCD与abcd是分开的），以此来贴合刘谦老师表演时候的情景 每一组字母（如Aa）分别代表一张扑克牌的左右两半）\n");
    printf("ps:左侧字母代表扑克牌叠的上侧，右侧字母代表扑克牌叠的下侧\n");
    printf("请连续输入8个字母：\n");
    for (int i = 0; i < 8; i++)
    {
        scanf("%c", &s[i]);
    }
    printf("请输入您名字的字数：\n");
    scanf("%d", &n);
    while (j < n)
    {
        swap2(s, 8);
        j++;
    }
    printf("您目前的牌叠是：\n");
    for (int o = 0; o < 8; o++)
        printf("%c", s[o]);
    printf("\n");
    label1:
    printf("拿起顶面的三张半牌，放到剩下五张半牌中间\n");
    printf("剩下五张半牌中间共有四个间隙，从上至下依次标号1、2、3、4,请输入数字以选择您想要插入的位置：\n");
    int m = 0;
    scanf("%d", &m);
    int b, c = 0;
    switch (m)
    {
        case 1 :
        case 2 :
        case 3 :
        case 4 :
            for (b = 0; b < m; b++)
            {
                swap1(s, m, c);
            }
            break;
        default:
            printf("输入错误，请按要求重新输入：\n");
            goto label1;
    }
    printf("您目前的牌叠是：\n");
    for (int o = 0; o < 8; o++)
        printf("%c", s[o]);
    printf("\n");
    printf("抽取出牌叠的第一张并藏起来，您藏起来的第一张半牌为：\n");
    printf("%c\n", s[0]);
    char s1[7];
    for (int i = 1; i < 8; i++)
    {
        s1[i - 1] = s[i];
    }
    printf("您目前的牌叠是：\n");
    for (int o = 0; o < 7; o++)
        printf("%c", s1[o]);
    printf("\n");
    label5:
    printf("请输入你是南方人还是北方人（输入对应选项前面的数字）\n");
    printf("1.南方人（拿取1张）\n");
    printf("2.北方人（拿取2张）\n");
    printf("3.不南不北（拿取3张）\n");
    int d = 0, e = 0, f = 0;
    scanf("%d", &c);
    switch (c)
    {
        label2:
        case 1:
            printf("剩下六张半牌中间共有五个间隙，从上至下依次标号1、2、3、4、5,请输入数字以选择您想要插入的位置：\n");
            scanf("%d", &d);
            switch (d)
            {
                case 1 :
                case 2 :
                case 3 :
                case 4 :
                case 5 :
                    for (b = 0; b < d; b++)
                    {
                        swap1(s1, d - 1, c);
                    }
                    break;
                default:
                    printf("输入错误，请按要求重新输入：\n");
                    goto label2;
            }
            break;
        label3:
        case 2:
            printf("剩下五张半牌中间共有四个间隙，从上至下依次标号1、2、3、4,请输入数字以选择您想要插入的位置：\n");
            scanf("%d", &e);
            switch (e)
            {
                case 1 :
                case 2 :
                case 3 :
                case 4 :
                    for (b = 0; b < e; b++)
                    {
                        swap1(s1, e - 1, c);
                    }
                    break;
                default:
                    printf("输入错误，请按要求重新输入：\n");
                    goto label3;
            }
            break;
        label4:
        case 3:
            printf("剩下四张半牌中间共有三个间隙，从上至下依次标号1、2、3,请输入数字以选择您想要插入的位置：\n");
            scanf("%d", &f);
            switch (f)
            {
                case 1 :
                case 2 :
                case 3 :
                    for (b = 0; b < f; b++)
                    {
                        swap1(s1, f - 1, c);
                    }
                    break;
                default:
                    printf("输入错误，请按要求重新输入：\n");
                    goto label4;
            }
            break;
        default:
            printf("输入错误，请按要求重新输入：\n");
            goto label5;
    }
    printf("您目前的牌叠是：\n");
    for (int o = 0; o < 7; o++)
        printf("%c", s1[o]);
    printf("\n");
    label6:
    printf("请输入您是男生还是女生（输入对应选项前面的数字）\n");
    printf("1.男生（丢弃顶面1张）\n");
    printf("2.女生（丢弃顶面2张）\n");
    int g = 0, v;
    scanf("%d", &g);
    switch (g)
    {
        case 1:
        case 2:
            v = 7 - g;
            break;
        default:
            printf("输入错误，请按要求重新输入：\n");
            goto label6;
    }
    char s2[(const int)v];
    for (int i = g; i < 7; i++)
    {
        s2[i - g] = s1[i];
    }
    printf("您目前的牌叠是：\n");
    for (int o = 0; o < v; o++)
        printf("%c", s2[o]);
    printf("\n");
    Sleep(3000);
    printf("见证奇迹的时刻：\n");
    int h = 0;
    while (h < 7)
    {
        swap2(s2, v);
        h++;
    }
    printf("您目前的牌叠是：\n");
    for (int o = 0; o < v; o++)
        printf("%c", s2[o]);
    printf("\n");
    printf("最后一个环节：好运留下来，烦恼丢出去！\n");
    int x = 0, y;
    if (g == 2)
    {
        while (x < 4)
        {
            swap2(s2 + x, v);
            for (y = x; y < v; y++)
            {
                printf("%c", s2[y]);
            }
            printf("\n");
            Sleep(1000);
            x++;
        }
    } else
    {
        while (x < 5)
        {
            swap2(s2 + x, v);
            for (y = x; y < v; y++)
            {
                printf("%c", s2[y]);
            }
            printf("\n");
            Sleep(1000);
            x++;
        }
    }
    printf("您藏起来的半牌是：\n");
    printf("%c\n", s[0]);
    printf("您手上剩余的半牌是：\n");
    if (g == 2)
        printf("%c\n", *(s2 + x - 1));
    if (g == 1)
        printf("%c\n", *(s2 + x));
    return 0;
}

