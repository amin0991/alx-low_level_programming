#include <stdio.h>

/**
* main - program that prints the lowercase alphabet in reverse.
* You can only use the putchar function
* Return: 0
*/

int main() {
int i;
for(i = 0; i < 10; i++) {
putchar(i + '0'); // print numbers 0-9
}
for(i = 0; i < 6; i++) {
putchar(i + 'a'); // print lowercase letters a-f
}
putchar('\n'); // print a newline character
return 0;
}
