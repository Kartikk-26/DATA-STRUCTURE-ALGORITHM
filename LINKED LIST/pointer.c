#include <stdio.h>
#include<stdlib.h>

struct student {
    int rnum;
    char name[20];
};

int main() {
    struct student s, *p;
    p = &s;
    printf("ENTER ROLL NUMBER AND NAME : \n");
    
    // Use & before p->rnum to pass the address of rnum to scanf
    scanf("%d", &p->rnum);
    
    // Remove fflush(stdin) as it's not a recommended practice
    // Use fgets to read the name to avoid buffer overflow issues
    printf("ENTER NAME : \n");
    fgets(p->name, sizeof(p->name), stdin);
    
    // Replace the newline character with a null terminator in the name
    size_t length = strlen(p->name);
    if (length > 0 && p->name[length - 1] == '\n') {
        p->name[length - 1] = '\0';
    }

    printf("ROLL NUMBER : %d\n NAME IS %s\n", p->rnum, p->name);
}
