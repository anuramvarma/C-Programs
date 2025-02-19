#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 1024

void usage() {
    printf("usage:\t./a.out filename word\n");
}

void to_lowercase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}

int main(int argc, char *argv[]) {
    FILE *fp;
    char fline[MAX];
    char lower_fline[MAX];
    char lower_word[MAX];
    char *newline;
    int count = 0;
    int occurrences = 0;

    if (argc != 3) {
        usage();
        exit(1);
    }

    fp = fopen(argv[1], "r");
    if (!fp) {
        printf("grep: could not open file: %s\n", argv[1]);
        exit(1);
    }

    // Convert the search word to lowercase
    strcpy(lower_word, argv[2]);
    to_lowercase(lower_word);

    while (fgets(fline, MAX, fp) != NULL) {
        count++;

        // Remove newline character if it's at the end of the line
        if ((newline = strchr(fline, '\n')) != NULL) {
            *newline = '\0';
        }

        // Convert the line to lowercase
        strcpy(lower_fline, fline);
        to_lowercase(lower_fline);

        // Check if the word is found in the line
        if (strstr(lower_fline, lower_word) != NULL) {
            printf("%s: %d %s\n", argv[1], count, fline);
            occurrences++;
        }
    }

    if (occurrences == 0) {
        printf("No occurrences of the word '%s' found.\n", argv[2]);
    }

    fclose(fp);
    return 0;
}
