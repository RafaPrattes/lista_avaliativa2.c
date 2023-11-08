#include <stdio.h>
int main (){

char time1[30];
char time2[30];
int Gtime1 = 0, Ltime1 = 0, Ztime1 = 0, Vtime1 =0, Mtime1 = 0, Atime1 = 0;
int Gtime2 = 0, Ltime2 = 0, Ztime2 = 0, Vtime2 =0, Mtime2 = 0, Atime2 = 0;
double Ftime1 = 0;
double Ftime2 = 0;
int vetor[22];

scanf("%s[^\n]", &time1);
scanf("%s[^\n]", &time2);
Ftime1 = (8.0*Gtime1 + 10.0*(Ltime1) + 5.0*(Ztime1) + 8.0*(Vtime1) + 11.0*(Mtime1) + 12.0*(Atime1))/100.00;
Ftime2 = (8.0*Gtime2 + 10.0*(Ltime2) + 5.0*(Ztime2) + 8.0*(Vtime2) + 11.0*(Mtime2) + 12.0*(Atime2))/100.00;

printf ("%s: %.2f de forca\n", time1, time2);

printf ("%s: %.2f de forca\n", time1, time2);

for (int i = 1; i <= 22; i++) {
            scanf("%d ", &vetor[i]);
        }

if (Ftime1 > Ftime2) {
    printf("time1 eh mais forte\n");
} else {
    printf("time2 eh mais forte\n");
}

return 0;
}