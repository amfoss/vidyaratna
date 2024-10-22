#include <stdio.h>
#include <limits.h>
#include <float.h>

void input_output_loop();

/* Multi
 * line
 * comments
 */
int main()
{
        printf("hello_world\n"); // Single line comments

        int x;  // Declare
        x = 10; // Initialize

        //       This is a literal
        //       |
        //       V
        int y = 30;
        //  ^
        //  |
        //  This is a variable

        // Enumeration constants
        enum Day { MON, TUE, WED, THU, FRI, SAT, SUN };
        // Constant variable
        const int z = 10;

        printf("Maximum values for:\n");
        printf("int: %e\n", INT_MAX);
        printf("char: %e\n", CHAR_MAX);
        printf("float: %e\n", FLT_MAX);
        printf("double: %e\n", DBL_MAX);

        printf("\nMinimum values for:\n");
        printf("int: %e\n", INT_MIN);
        printf("char: %e\n", CHAR_MIN);
        printf("float: %e\n", FLT_MIN);
        printf("double: %e\n", DBL_MIN);

        printf("\nEntering input-output loop\n");
        printf("Hit CTRL+D to exit.\n");
        input_output_loop();
}

void input_output_loop()
{
        char c;
        int words, lines, characters;
        words = lines = characters = 0;

        while((c = getchar()) != EOF) {
                putchar(c);
                if (c == ' ') {
                        words++;
                } else if (c == '\n') {
                        lines++;
                        words++;
                } else {
                        characters++;
                }
        }

        printf("\nCharacters: %d\nWords: %d\nLines: %d\n", characters, words, lines);
}
