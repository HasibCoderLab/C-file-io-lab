// ================================================
//               * Language: C
//               * Topic: File IO
// ===============================================

#include <stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("file.txt","r");
    fclose(fptr);
    return 0;
}


// #include <stdio.h>
// int main(){
    // return 0;
// }