#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char *argv[])
{
    double z = atof(argv[1]);
    double k,f,c;
/*Introduce the formulas to calculate the degrees for Celsius, Kelvin and Fahrenheit. Check for absolute zero.*/
    if (argc > 2)
    {
        if (strcmp(argv[2],"C")==0)
        {
            k=z+273.15;
            f=9*(z+32)/9;
            if (k<0)
            {
                printf("less than absolute zero");
            }
            else
            {
                printf ("%.2f C\n", z);
                printf ("%.2f K\n", k);
                printf ("%.2f F\n", f);
            }
        }
        else if (strcmp(argv[2],"F")==0)
        {
          c=5*(z-32)/9;
          k=5*(z-32)/9+273.15;
          if (k<0)
            {
                printf("less than absolute zero");
            }
            else
            {
                printf ("%.2f F\n", z);
                printf("%.2f C\n", c);
                printf("%.2f K\n", k);
            }

        }
        else
        {
          c=z-273.15;
          f=9*(z-273.15)/5+32;
          if (z<0)
            {
                printf("less than absolute zero");
            }
            else
            {
                printf ("%.2f K\n", z);
                printf ("%.2f C\n", c);
                printf ("%.2f F\n", f);
            }
        }
    }
    /*Check for absolute zero and the output*/
    else
    {

        k=z+273.15;
        f=9*(z+32)/9;
        if (k<0)
        {
            printf ("less than absolute zero \n\n");
        }
        else
        {

            printf ("%.2f C: \n", z);
            printf ("%.2f K\n", k);
            printf ("%.2f F\n\n", f);
        }


        c=5*(z-32)/9;
        k=5*(z-32)/9+273.15;
        if (k<0)
        {
            printf("less than absolute zero \n\n");
        }
        else
        {
            printf ("%.2f F: \n", z);
            printf("%.2f C\n", c);
            printf("%.2f K\n\n", k);
        }


        c=z-273.15;
        f=9*(z-273.15)/5+32;
         if (z<0)
        {
            printf("less than absolute zero \n\n");
        }
        else
        {
            printf ("%.2f K: \n", z);
            printf ("%.2f C\n", c);
            printf ("%.2f F\n", f);
        }
    }
    return 0;
}
