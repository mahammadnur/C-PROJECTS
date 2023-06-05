#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, h, i = 1, a, z, b = 1;
    printf("\n Enter the month number of the year 2023: ");
    scanf("%d", &m);
    switch (m) {
        case 1:
            a = 1;
            z = 31;
            break;
        case 2:
            a = 4;
            z = 29;
            break;
        case 3:
            a = 4;
            z = 31;
            break;
        case 4:
            a = 7;
            z = 30;
            break;
        case 5:
            a = 2;
            z = 31;
            break;
        case 6:
            a = 5;
            z = 30;
            break;
        case 7:
            a = 7;
            z = 31;
            break;
        case 8:
            a = 3;
            z = 31;
            break;
        case 9:
            a = 6;
            z = 30;
            break;
        case 10:
            a = 1;
            z = 31;
            break;
        case 11:
            a = 4;
            z = 30;
            break;
        case 12:
            a = 6;
            z = 30;
            break;
        default:
            printf("\a \a Invalid MONTH\n");
            exit(0);
    }

    printf("\n \n \n ");
    printf("\t \t  \t month is %d - 2023  \t \t \n \n ", m);
    printf("\t|SUN| \tMON \t TUE \t WED \t THU \t FRI \t SAT \t  \n \n ");
    switch (a) {
        case 1:
            printf("\t %d", i);
            break;
        case 2:
            printf("\t \t %d", i);
            break;
        case 3:
            printf("\t \t\t%d", i);
            break;
        case 4:
            printf("\t \t\t\t %d", i);
            break;
        case 5:
            printf("\t\t\t\t\t %d", i);
            break;
        case 6:
            printf("\t\t\t\t\t\t %d", i);
            break;
        case 7:
            printf("\t\t\t\t\t\t\t %d", i);
            break;
    } 

    h = 8 - a;   
    for (i = 2; i <= h; i++) {
        printf("\t %d", i);
    }
    printf("\n");

    for (i = h + 1; i <= z; i++) {
        if (b == 8) {
            printf("\n");
            b = 1;
        }
        printf("\t %d", i);
        b++;
    }
    return 0;
}
