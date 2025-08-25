// ================================================
//               * Language: C
//               * Topic: File IO
// ===============================================

// #include <stdio.h>
// int main(){
//     FILE *fptr;
//     fptr = fopen("file.txt","r");
//     fclose(fptr);
//     return 0;
// }


//  Best Practice  |✨✨| 

// #include <stdio.h>
// int main(){
//     FILE *fptr = fopen("newFile.txt" , "r");
//     if (fptr == NULL)
//     {
//         printf("File dosesnt't exist\n");
//     }else{
//      fclose(fptr);
//     }
    
//     return 0;
// }

// |✨✨|  write mode  |✨✨| 

// #include <stdio.h>
// int main(){
//     FILE *fptr = fopen("New.txt" , "w");
//     if(fptr == NULL){
//         printf("File dosesnt't exist\n");
//     }else{
//         fclose(fptr);
//     }
//     return 0;
// }


// |✨✨|  File reading mode  |✨✨| 


#include <stdio.h>
int main(){
    FILE *fptr ;
   fptr= fopen("file.txt" , "r");

    char ch ;
    fscanf(fptr , "%c", &ch) ;
    printf("%c\n" , ch);  // output=>     H
    fscanf(fptr , "%c" , &ch);
    printf("%c\n" ,ch) ; // output   => i;

    fclose(fptr);
    return 0;
}



// #include <stdio.h>
// int main(){
//     return 0;
// }



// 👉👉  🔹🔹  Question
// 💥 ⚡ 🔥 ✨  📌  => Notes / Markers📌📍🎯📝