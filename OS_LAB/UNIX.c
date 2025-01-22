#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <dirent.h>
int main() {
    char buff[256];
    DIR *dirp;
    struct dirent *dptr;
   
    printf("\nENTER DIRECTORY NAME: ");
    if (fgets(buff, sizeof(buff), stdin) == NULL) {
        perror("Error reading input");
        return 1;
    }
   

    buff[strcspn(buff, "\n")] = 0;
   
    dirp = opendir(buff);
    if (dirp == NULL) {
        perror("Error opening directory");
        return 1;
    }
    printf("\nContents of directory '%s':\n", buff);
    while ((dptr = readdir(dirp)) != NULL) {
        printf("%s\n", dptr->d_name);
    }    
    closedir(dirp);
    return 0;
}
