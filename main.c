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
    printf("Введите ваше число:");
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
    printf("Задание №1-Рекурсивно описать функцию maxdig(N), которая находит наибольшую цифру в десятичной записи неотрицательного целого числа N\n (Задание 3 из 5-го таска)\n");
    printf("Задание №2-Дана последовательность чисел, завершающаяся числом -1. Найдите сумму всех этих чисел, не используя цикл.\n (Задание 5 из 5-го таска)\n");
    int p=5,a,b,c=0,s=0;
    while(p!=0) //0-условие прекращения работы программы
    {
        printf("Выберите задание:");
    scanf("%d",&p);

       switch(p)
      {
        case 1:
            printf("Введите любое неотрицательное число(до 9-ти символов):");
            scanf("%d",&a);
            printf("Наибольшее число=%d\n",maxdig(a,b));
            break;
        case 2:
            printf("Сумма чисел равна:%d\n",posled(c,s));
          break;
      }

    }


    return 0;
}
