#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    // check to see if user input any args
    if (argc > 1) {
        // check to see if it was -h
        if (strcmp(argv[1], "-h") == 0) {
            printf("this is just a simple calculator program\n");
            printf("usage\n");
            printf("-h / displays this menu\n");
            printf("./calculator -h\n");
            printf("-c / calculates the given values\n");
            printf("./calculator -c 5 + 5\n");
            printf("-ch / displays the -c help menu\n");
            printf("./calculator -ch\n");
        }
        // check to see if it was -ch
        if (strcmp(argv[1], "-ch") == 0) {
            printf("this is how to use the -ch flag\n");
            printf("the first input is the first number\n");
            printf("./calculator -c *5* + 5\n");
            printf("the second input is the operation\n");
            printf("./calculator -c 5 *+* 5\n");
            printf("the third input is the second number\n");
            printf("./calculator -c 5 + *5*\n");
            printf("so when you run this command, it will return the right value\n");
            printf("./calculator -c 5 * 5\n");
            printf("25\n");
        }
    }
}