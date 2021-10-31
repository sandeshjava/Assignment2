 #include <stdio.h>

int main()
{
  while (1)
  {
    int selection;
    printf("Select one option: \n 1.Addition \n 2.Multiplication \n 3.Exit \n");
    printf("Enter your selection: ");
    scanf("%d", &selection);
    if (selection == 1)
    {
      long int number_1, number_2;
      printf("Enter two integer number_s: ");
      scanf("%ld %ld", &number_1, &number_2);
      long long int sum = number_1 + number_2;
      printf("Sum is: %ld \n", sum);
    }
    else if (selection == 2)
    {
      long int number_1, number_2;
      printf("Enter two integer number_s: ");
      scanf("%ld %ld", &number_1, &number_1);
      long long int product = number_1 * number_2;
      printf("Product is: %ld \n", product);
    }
    else
    {
      printf("Exiting..");
      break;
    }
  }
  return 0;
} 