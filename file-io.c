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


// |✨✨|  File reading mode with char |✨✨| 


// #include <stdio.h>
// int main(){
//     FILE *fptr ;
//    fptr= fopen("file.txt" , "r");

//     char ch ;
//     fscanf(fptr , "%c", &ch) ;
//     printf("%c\n" , ch);  // output=>     H
//     fscanf(fptr , "%c" , &ch);
//     printf("%c\n" ,ch) ; // output   => i;

//     fclose(fptr);
//     return 0;
// }

// |✨✨|  File reading mode with int |✨✨| 

// #include <stdio.h>
// int main(){
//   FILE *fptr;
//   fptr = fopen("file.txt", "r");

//   int num;
//   fscanf(fptr  , "%d", &num);
//   printf("Number  : %d\n" , num);
//   fclose(fptr);
//     return 0;
// }


// // |✨✨|  File writing mode with char |✨✨| 

// #include <stdio.h>
// int main(){
//     FILE *fptr;
//     fptr = fopen("file.txt" , "w");

//     // char ch
//     fprintf(fptr , "%c" , 'M');
//     fprintf(fptr , "%c" , 'A');
//     fprintf(fptr , "%c" , 'N');
//     fprintf(fptr , "%c" , 'G');
//     fprintf(fptr , "%c" , 'O');
//     // fprintf(fptr , "%c" , '✨');

//     fclose(fptr);
//     return 0;
// }

// |✨✨|  File append mode with char |✨✨| 

// #include <stdio.h>
// int main(){
//     FILE *fptr;
//     fptr = fopen("file.txt" , "a");

//     fprintf(fptr, "%s" , " ");
//     fprintf(fptr , "%c" , '&');
//     fprintf(fptr , "%c" , 'A');
//     fprintf(fptr , "%c" , 'P');
//     fprintf(fptr , "%c" , 'P');
//     fprintf(fptr , "%c" , 'L');
//     fprintf(fptr , "%c" , 'E');
//     fclose(fptr);

//     return 0;
// }

// |✨✨|  File reading mode with fgetc|✨✨| 


// #include <stdio.h>
// int main(){
//     FILE *fptr;
//     fptr = fopen("file.txt" , "r");
//     printf( "%c" ,fgetc(fptr));
//     printf("%c" , fgetc(fptr));
//     printf("%c" , fgetc(fptr));
//     printf("%c" , fgetc(fptr));
//     printf("%c\n" , fgetc(fptr));
//     // printf("%c" , fgetc(fptr));
// fclose(fptr)

//     return 0;
// }





// |✨✨|  File reading mode with fputc|✨✨| 

#include <stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("file.txt" , "w");

   putc('M',(fptr));
   putc('A',(fptr));
   putc('N',(fptr));
   putc('G',(fptr));
   putc('O',(fptr));

   return 0;
}


// #include <stdio.h>
// int main(){
//     return 0;
// }

// 👉👉  🔹🔹  Question
// 💥 ⚡ 🔥 ✨  📌  => Notes / Markers📌📍🎯📝