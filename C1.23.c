//�����Ƕ���ǫ��ʦ2024�괺��ħ�����ݵļ�ʵ��
//�人�Ƽ���ѧ ����Ԯ
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
    printf("�����Ƕ���ǫ��ʦ2024�괺���������ħ�����ݵļ�ʵ��\n");
    Sleep(2000);
    printf("�人�Ƽ���ѧ ����Ԯ\n");
    Sleep(2000);
    char s[8];
    int n = 0, j = 0;
    printf("��������8����ĸ��Ҫ����ذ���������ĸ�Ĵ�Сд ��ABCDabcd�����д�д��ĸ��Ҫ��������Сд��ĸ�ֿ�����ʾ����ABCD������������ABCD��abcd�Ƿֿ��ģ����Դ���������ǫ��ʦ����ʱ����龰 ÿһ����ĸ����Aa���ֱ����һ���˿��Ƶ��������룩\n");
    printf("ps:�����ĸ�����˿��Ƶ����ϲ࣬�Ҳ���ĸ�����˿��Ƶ����²�\n");
    printf("����������8����ĸ��\n");
    for (int i = 0; i < 8; i++)
    {
        scanf("%c", &s[i]);
    }
    printf("�����������ֵ�������\n");
    scanf("%d", &n);
    while (j < n)
    {
        swap2(s, 8);
        j++;
    }
    printf("��Ŀǰ���Ƶ��ǣ�\n");
    for (int o = 0; o < 8; o++)
        printf("%c", s[o]);
    printf("\n");
    label1:
    printf("����������Ű��ƣ��ŵ�ʣ�����Ű����м�\n");
    printf("ʣ�����Ű����м乲���ĸ���϶�������������α��1��2��3��4,������������ѡ������Ҫ�����λ�ã�\n");
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
            printf("��������밴Ҫ���������룺\n");
            goto label1;
    }
    printf("��Ŀǰ���Ƶ��ǣ�\n");
    for (int o = 0; o < 8; o++)
        printf("%c", s[o]);
    printf("\n");
    printf("��ȡ���Ƶ��ĵ�һ�Ų������������������ĵ�һ�Ű���Ϊ��\n");
    printf("%c\n", s[0]);
    char s1[7];
    for (int i = 1; i < 8; i++)
    {
        s1[i - 1] = s[i];
    }
    printf("��Ŀǰ���Ƶ��ǣ�\n");
    for (int o = 0; o < 7; o++)
        printf("%c", s1[o]);
    printf("\n");
    label5:
    printf("�����������Ϸ��˻��Ǳ����ˣ������Ӧѡ��ǰ������֣�\n");
    printf("1.�Ϸ��ˣ���ȡ1�ţ�\n");
    printf("2.�����ˣ���ȡ2�ţ�\n");
    printf("3.���ϲ�������ȡ3�ţ�\n");
    int d = 0, e = 0, f = 0;
    scanf("%d", &c);
    switch (c)
    {
        label2:
        case 1:
            printf("ʣ�����Ű����м乲�������϶�������������α��1��2��3��4��5,������������ѡ������Ҫ�����λ�ã�\n");
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
                    printf("��������밴Ҫ���������룺\n");
                    goto label2;
            }
            break;
        label3:
        case 2:
            printf("ʣ�����Ű����м乲���ĸ���϶�������������α��1��2��3��4,������������ѡ������Ҫ�����λ�ã�\n");
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
                    printf("��������밴Ҫ���������룺\n");
                    goto label3;
            }
            break;
        label4:
        case 3:
            printf("ʣ�����Ű����м乲��������϶�������������α��1��2��3,������������ѡ������Ҫ�����λ�ã�\n");
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
                    printf("��������밴Ҫ���������룺\n");
                    goto label4;
            }
            break;
        default:
            printf("��������밴Ҫ���������룺\n");
            goto label5;
    }
    printf("��Ŀǰ���Ƶ��ǣ�\n");
    for (int o = 0; o < 7; o++)
        printf("%c", s1[o]);
    printf("\n");
    label6:
    printf("������������������Ů���������Ӧѡ��ǰ������֣�\n");
    printf("1.��������������1�ţ�\n");
    printf("2.Ů������������2�ţ�\n");
    int g = 0, v;
    scanf("%d", &g);
    switch (g)
    {
        case 1:
        case 2:
            v = 7 - g;
            break;
        default:
            printf("��������밴Ҫ���������룺\n");
            goto label6;
    }
    char s2[(const int)v];
    for (int i = g; i < 7; i++)
    {
        s2[i - g] = s1[i];
    }
    printf("��Ŀǰ���Ƶ��ǣ�\n");
    for (int o = 0; o < v; o++)
        printf("%c", s2[o]);
    printf("\n");
    Sleep(3000);
    printf("��֤�漣��ʱ�̣�\n");
    int h = 0;
    while (h < 7)
    {
        swap2(s2, v);
        h++;
    }
    printf("��Ŀǰ���Ƶ��ǣ�\n");
    for (int o = 0; o < v; o++)
        printf("%c", s2[o]);
    printf("\n");
    printf("���һ�����ڣ����������������ն���ȥ��\n");
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
    printf("���������İ����ǣ�\n");
    printf("%c\n", s[0]);
    printf("������ʣ��İ����ǣ�\n");
    if (g == 2)
        printf("%c\n", *(s2 + x - 1));
    if (g == 1)
        printf("%c\n", *(s2 + x));
    return 0;
}

