#include <stdio.h>

int main() {
    char text[100]; 

    printf("ban hay nhap vao 1 chuoi ky tu :  \n");
    fgets(text, sizeof(text), stdin); 
    FILE *file = fopen("output.txt", "w");
    if (file == NULL) { 
        perror("Error opening file");
        return 1;
    }

    fprintf(file, "%s", text);
    fclose(file);

    printf("chuoi b vua nhap da dc luu vao  file output.txt.\n");
    return 0;
}

