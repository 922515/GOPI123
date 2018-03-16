#include <stdio.h>
  int main() {
        char string[100], even[100], odd[100], i, j, k;

        i = j = k = 0;

        /* get the input string from the user */
        printf("Enter your input string:");
        fgets(string, 100, stdin);
        string[strlen(string) - 1] = '\0';

        /* printing the input string */
        printf("Given Input string:%s\n", string);

        /*
         * print the characters at odd position in odd array.
         * Similarly, print the characters at even position in
         * even array.
         */
        while (string[i] != '\0') {
                if (i % 2 == 0) {
                        odd[j++] = string[i];
                } else {
                        even[k++] = string[i];
                }
                i++;
        }

        /* terminating even and odd string with NULL */
        odd[j] = even[k] = '\0';

        /* print the charactersa at odd position and even positions */
        printf("Characters at odd position: %s\n", odd);
        printf("Characters at even position: %s\n", even);
        return 0;
  }
