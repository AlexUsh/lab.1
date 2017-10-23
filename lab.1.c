#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
int main(int argc, char *argv[])
{
    double z = atof(argv[1]);
    double k,f,c;

    if (argc > 2)
    {
        if (strcmp(argv[2],"C")==0)
        {
          k=z+273.15;
          f=9*(z+32)/9;
          printf ("%.2f C\n", z);
          printf ("%.2f K\n", k);
          printf ("%.2f F\n", f);
        }
        else if (strcmp(argv[2],"F")==0)
        {
          c=5*(z-32)/9;
          k=5*(z-32)/9+273.15;
          printf ("%.2f F\n", z);
          printf("%.2f C\n", c);
          printf("%.2f K\n", k);

        }
        else
        {
          c=z-273.15;
          f=9*(z-273.15)/5+32;
          printf ("%.2f K\n", z);
          printf ("%.2f C\n", c);
          printf ("%.2f F\n", f);
        }
    }
    else
    {
      k=z+273.15;
      f=9*(z+32)/9;
      printf ("%.2g C: \n", z);
      printf ("%.2f K\n", k);
      printf ("%.2f F\n\n", f);

      c=5*(z-32)/9;
      k=5*(z-32)/9+273.15;
      printf ("%.2g F: \n", z);
      printf("%.2f C\n", c);
      printf("%.2f K\n\n", k);

      c=z-273.15;
      f=9*(z-273.15)/5+32;
      printf ("%.2g K: \n", z);
      printf ("%.2f C\n", c);
      printf ("%.2f F\n", f);
    }
    getch ();
    return 0;
}
