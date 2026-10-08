#include <stdio.h>
int Ftask();
int Stask();
int Ttask();
int Hometask();
int main()
{
    Ftask();
    Stask();
    Ttask();
    Hometask();
    return 0;
}
int Ftask()
{
    printf("TASK1\n");
    printf("123\n");
    printf("1\n2\n3\n");
    printf("1\n\t2\n\t\t3\n");
    printf("%1d\n%2d\n%3d\n%4d\n", 1, 2, 3, 4);
    printf("%10.3f\n ", 12.234657);
    printf("%10.5f\n ", 12.234657);
    printf ("Остаток от деления %d на %d равен %d\n ",5, 2, 5%2);
    printf ("Остаток от деления %d на %d равен %d\n ",7, 5, 7%5);
    printf ("Умножение %d на %d равно %d\n ",2000, 4, 2000*4);
    printf ("%g разделить %e равно %f\n ",5., 2000000., 5./2000000);
    printf ("%d разделить %d равно %d\n ",5., 2000000., 5./2000000); 
    printf ("%f разделить %f равно %f\n ",5., 2000000., 5./2000000); 
    printf ("%e разделить %e равно %e\n ",5., 2000000., 5./2000000);
    printf ("%g разделить %g равно %g\n ",5., 2000000., 5./2000000); 
    return 0;
}
int Stask()
{
    int n=3,k=3;
    printf("TASK2\n");
    printf("Сейчас %d часа %d минуты 00 секунд\n", n, k);
    printf("Идет %d минута суток\n",n*60+k);
    printf("До полуночи осталось %d часов и %d минут\n", 12-n-1, 60-k );
    printf("С 8.00 прошло %d секунд\n", (((n+4)*60)+k)*60);
    printf("Текущий час  = %.3f суток  и текущая минута =  %.2f часа\n", n/24.0, k/60.0);
    return 0;
} 
int Ttask()
{
     int n = 3, k = 3, m = 5, l = 1333;
    printf("Дано:\n%d\n%d\n_______\nОтвет:\n%0+*.*f\n", n, l, k+m+2, m, (n/1.0)/l);
    return 0;
}

int Hometask()
{
    int n, k;
    printf("Введите удержание человека на воде в мс\n");
    scanf("%d",&n);
    printf("Введите длину шага в сантиметрах\n");
    scanf("%d", &k);
    printf("Скорость ходьбы по воде как по суше %.2f М/С\n",(10.0*k)/n);
}
