#include<stdio.h>
int get_choice();
int main()
{
   int choice;
   double number1;
   double number2;
   char operation;

   while(choice = get_choice()!= 2)
   {
       printf("计算开始：\n");
       scanf("%lf%c%lf",&number1,&operation,&number2);
       switch(operation)
       {
          case '+':
               printf("=%lf\n\n",number1+number2);
              break;

          case '-':
               printf("=%lf\n\n",number1-number2);
               break;

          case '*':
               printf("=%lf\n\n",number1*number2);
               break;

          case '/':
               if(number2==0)
                 printf("除数不能为0！\n\n");
               else
                 printf("=%lf\n",number1/number2);
               break;

          case '%':
               if((long)number2==0)
                 printf("除数不能为0！\n\n");
               else
                 printf("=%ld\n\n",(long)number1%(long)number2);
               break;

          default:
              printf("抱歉,请输入正确操作。\n\n");
              break;
        }
   }
   printf("********************\n");
   printf("谢谢您的使用，再见！\n");
   printf("********************\n");
   return 0;
}

int get_choice()
{
    int ch;

    printf("请选择你要进行的操作：\n");
    printf("********************\n");
    printf("     1.开始计算\n");
    printf("     2.退出\n");
    printf("********************\n");
    scanf("%d",&ch);
    return ch;
}
