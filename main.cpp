#include <iostream>
#include <stdio.h>
#include <Windows.h>

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int guess = 50;
    char response = 0;

    printf("Выберите целое число в интервале от 1 до 100. Я попробую угадать ");
    printf("его.\nНажмите клавишу y, если моя догадка верна и ");
    printf("\nклавишу n в противном случае.\n");
    printf("Если задуманное число верно, нажмите y.\n");
    printf("Для входа нажмите E.\n");

    while ((response = getchar())!= 'y')
    {
        //-------------------- Для числа 50 -------------------------------------------//

        if (response == 'E')
        {
            printf("Ваше число %d?\n", 50);
            response = getchar();

        //-------------------- Для числа > 50 -------------------------------------------//

        if (response = getchar() == 'n')
        {
            printf("Ваше число > %d?\n", guess);
            response = getchar();

        //-------------------- Для числа 62 -------------------------------------------//

        if (response = getchar() == 'y')
        {
            printf("Ваше число %d?\n", 62);
            response = getchar();

        //-------------------- Для числа > 62 -------------------------------------------//

        if (response = getchar() == 'n')
        {
            printf("Ваше число > %d?\n", 62);
            response = getchar();

        //-------------------- Для числа < 62 -------------------------------------------//

        if (response = getchar() == 'n')
        {
            printf("Ваше число < %d?\n", 62);
            response = getchar();

            if (response = getchar() == 'y')
            {
                printf("Ваше число %d?\n", 61);
                response = getchar();

                for (int i = 60; i >= 50; i--)
                {
                     if (response = getchar() == 'n')
                     {
                          printf("Ваше число %d?\n", i);
                          response = getchar();
                     }
                     else
                        break;
                }
            }
        }

        //-------------------- Для числа 75 -------------------------------------------//

        else
        {
            printf("Ваше число %d?\n", 75);
            response = getchar();

        //-------------------- Для числа > 75 -------------------------------------------//

        if (response = getchar() == 'n')
        {
             printf("Ваше число > %d?\n", 75);
             response = getchar();

        //-------------------- Для числа < 75 -------------------------------------------//

        if (response = getchar() == 'n')
        {
             printf("Ваше число < %d?\n", 75);
             response = getchar();

             if (response = getchar() == 'y')
             {
                 printf("Ваше число %d?\n", 74);
                 response = getchar();

                 for (int i = 73; i >= 62; i--)
                 {
                     if (response = getchar() == 'n')
                     {
                         printf("Ваше число %d?\n", i);
                         response = getchar();
                     }
                     else
                       break;
                 }
             }
        }

        //-------------------- Для числа 87 -------------------------------------------//

        else 
        {
            printf("Ваше число %d?\n", 87);
            response = getchar();

        //-------------------- Для числа > 87 -------------------------------------------//

        if (response = getchar() == 'n')
        {
            printf("Ваше число > %d?\n", 87);
            response = getchar();

        //-------------------- Для числа < 87 -------------------------------------------//

        if (response = getchar() == 'n')
        {
            printf("Ваше число < %d?\n", 87);
            response = getchar();

            if (response = getchar() == 'y')
            {
                printf("Ваше число %d?\n", 86);
                response = getchar();

                for (int i = 85; i >= 75; i--)
                {
                    if (response = getchar() == 'n')
                    {
                        printf("Ваше число %d?\n", i);
                        response = getchar();
                    }
                    else
                      break;
                }
            }
        }

        //-------------------- Для числа 100 -------------------------------------------//

        else 
        {
            printf("Ваше число %d?\n", 100);
            response = getchar();
                               
        //-------------------- Для числа < 100 -------------------------------------------//

        if (response = getchar() == 'n')
        {
            printf("Ваше число < %d?\n", 100);
            response = getchar();

            if (response = getchar() == 'y')
            {
                printf("Ваше число %d?\n", 99);
                response = getchar();

                for (int i = 98; i >= 87; i--)
                {
                    if (response = getchar() == 'n')
                    {
                        printf("Ваше число %d?\n", i);
                        response = getchar();
                    }
                    else
                      break;
                }
            }
        }
        }
        }
        }
        }
        }
        }
        }
            
        //-------------------- Для числа < 50 -------------------------------------------//

        else
        {
            printf("Ваше число < %d?\n", guess);
            response = getchar();

        //-------------------- Для числа 37 -------------------------------------------//

        if (response = getchar() == 'y')
        {
            printf("Ваше число %d?\n", 37);
            response = getchar();

        //-------------------- Для числа < 37 -------------------------------------------//

        if (response = getchar() == 'n')
        {
            printf("Ваше число < %d?\n", 37);
            response = getchar();

        //-------------------- Для числа > 37 -------------------------------------------//

        if (response = getchar() == 'n')
        {
            printf("Ваше число > %d?\n", 37);
            response = getchar();

            if (response = getchar() == 'y')
            {
                printf("Ваше число %d?\n", 38);
                response = getchar();

                for (int i = 39; i <= 50; i++)
                {
                    if (response = getchar() == 'n')
                    {
                        printf("Ваше число %d?\n", i);
                        response = getchar();
                    }
                    else
                      break;
                }
            }
        }

        //-------------------- Для числа 25 -------------------------------------------//

        else 
        {
            printf("Ваше число %d?\n", 25);
            response = getchar();

        //-------------------- Для числа < 25 -------------------------------------------//

        if (response = getchar() == 'n')
        {
            printf("Ваше число < %d?\n", 25);
            response = getchar();

        //-------------------- Для числа > 25 -------------------------------------------//

        if (response = getchar() == 'n')
        {
            printf("Ваше число > %d?\n", 25);
            response = getchar();

            if (response = getchar() == 'y')
            {
                printf("Ваше число %d?\n", 26);
                response = getchar();

                for (int i = 27; i <= 37; i++)
                {
                   if (response = getchar() == 'n')
                   {
                       printf("Ваше число %d?\n", i);
                       response = getchar();
                   }
                   else
                      break;
                }
            }
        }

        //-------------------- Для числа 12 -------------------------------------------//

        else 
        {
            printf("Ваше число %d?\n", 12);
            response = getchar();

        //-------------------- Для числа < 12 -------------------------------------------//

        if (response = getchar() == 'n')
        {
            printf("Ваше число < %d?\n", 12);
            response = getchar();

        //-------------------- Для числа > 12 -------------------------------------------//

        if (response = getchar() == 'n')
        {
            printf("Ваше число > %d?\n", 12);
            response = getchar();

            if (response = getchar() == 'y')
            {
                printf("Ваше число %d?\n", 13);
                response = getchar();

                for (int i = 14; i <= 25; i++)
                {
                    if (response = getchar() == 'n')
                    {
                        printf("Ваше число %d?\n", i);
                        response = getchar();
                    }
                    else
                      break;
                }
            }
        }

        //-------------------- Для числа 6 -------------------------------------------//

        else 
        {
            printf("Ваше число %d?\n", 6);
            response = getchar();

        //-------------------- Для числа < 6 -------------------------------------------//

        if (response = getchar() == 'n')
        {
            printf("Ваше число < %d?\n", 6);
            response = getchar();

            if (response = getchar() == 'y')
            {
                printf("Ваше число %d?\n", 5);
                response = getchar();
                
                for (int i = 4; i >= 0; i--)
                {
                    if (response = getchar() == 'n')
                    {
                        printf("Ваше число %d?\n", i);
                        response = getchar();
                    }
                    else
                      break;
                }
            }
        }

        //-------------------- Для числа > 6 -------------------------------------------//

        else
        {
            printf("Ваше число > %d?\n", 6);
            response = getchar();

        if (response = getchar() == 'y')
        {
            printf("Ваше число %d?\n", 7);
            response = getchar();

            for (int i = 8; i <= 12; i++)
            {
                if (response = getchar() == 'n')
                {
                    printf("Ваше число %d?\n", i);
                    response = getchar();
                }
                else
                break;
            }
        }
        }
        }
        }
        } 
        }
        }
        }
        }
        }
        }
        printf("Еее. Я знал, что у меня получится.\n");
        }
	    
	return 0;
    }
}
