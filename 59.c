include <stdio.h>

int main()
{
  int a, b;
  scanf("%d %d", &a, &b);//get two int values from user

  if (a < b)//is a less than b?
    printf("%d is less than %d\n", a, b);

  if (a == b)//is a equal to b?
    printf("%d is equal to %d\n", a, b);

  if (a > b)//is a greater than b?
    printf("%d is greater than %d\n", a, b);
}
