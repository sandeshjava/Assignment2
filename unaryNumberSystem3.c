#include <stdio.h>
#include <string.h>

int main()
{
  while (1)
  {
    int selection;
    printf("Select a choice: \n 1.Addition \n 2.Multiplication \n 3.Exit \n");
    printf("Enter a choice: ");
    scanf("%d", &selection);
    if (selection == 1)
    {
      char unary_Num_1[500], unary_Num_2[500];
      printf("Enter two unary no.s: ");
      scanf("%s %s", unary_Num_1, unary_Num_2);
      if (validunary(unary_Num_1) == 1 && validunary(unary_Num_2) == 1)
      {
        strcat(unary_Num_1, unary_Num_2);
        printf("Sum is: %s\n", unary_Num_1);
      }
    }
    else if (selection == 2)
    {
      char unary_Num_1[500], unary_Num_2[500];
      printf("Enter two unary no.s: ");
      scanf("%s %s", unary_Num_1, unary_Num_2);
      if (validunary(unary_Num_1) == 1 && validunary(unary_Num_2) == 1)
      {
        printf("Product is: ");
        for (int i = 0; i < strlen(unary_Num_2); i++)
        {
          printf("%s", unary_Num_1);
        }
        printf("\n");
      }
    }
    else
    {
      printf("Exiting..");
      break;
    }
  }
  return 0;
} 