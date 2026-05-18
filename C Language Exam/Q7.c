
// * * * * * 
// *       * 
// * * * * *
// *
// *


// totalRows = 5
// totalCol  = 5
// Row 1     = Full Stars
// Row 3     = Full Stars
// Row 2     = First And Last Column Ma Stars Print Karva Or Bakina Ma Space Rakhvi
// Row 4 and 5 = just first column ma star print karva bakinama space rakhvi 


#include <stdio.h>

int main()
{

    for (int i = 1; i <= 5; i++)

    {

        for (int j = 1; j <= 5; j++)

        {

            if (i == 1 || i == 3)
            {

                printf(" *");


            }


            else if (i == 2)


            {

                if (j == 1 || j == 5)
                {

                    printf(" *");


                }
                else
                {


                    printf("  ");


                }
            }
            else
            {
                if (j == 1)
                {


                    printf(" *");

                    
                }
            }
        }
        printf("\n");
    }

    return 0;
}