#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>
int maxdig(int n,int b)
{if(n/10!=0){
    if(n%10>b){
            b=n%10;
    }
    n=n/10;
    maxdig(n,b);
    }
    else {
        if(n%10>b){
            b=n%10;
        }
        return b;
    }


}
int posled(int a,int s)
{   if(a!=-1){
    printf("������� ���� �����:");
    scanf("%d",&a);
    s=s+a;
    posled(a,s);
    }

     else {
    return s+1;
}
}

int main()
{   setlocale(LC_ALL,"RUS");
    printf("������� �1-���������� ������� ������� maxdig(N), ������� ������� ���������� ����� � ���������� ������ ���������������� ������ ����� N\n (������� 3 �� 5-�� �����)\n");
    printf("������� �2-���� ������������������ �����, ������������� ������ -1. ������� ����� ���� ���� �����, �� ��������� ����.\n (������� 5 �� 5-�� �����)\n");
    int p=5,a,b,c=0,s=0;
    while(p!=0) //0-������� ����������� ������ ���������
    {
        printf("�������� �������:");
    scanf("%d",&p);

       switch(p)
      {
        case 1:
            printf("������� ����� ��������������� �����(�� 9-�� ��������):");
            scanf("%d",&a);
            printf("���������� �����=%d\n",maxdig(a,b));
            break;
        case 2:
            printf("����� ����� �����:%d\n",posled(c,s));
          break;
      }

    }


    return 0;
}
