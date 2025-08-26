// ================================================
//               * Language: C
//               * Topic: File IO
// ===============================================

// 👉👉  🔹🔹  Question 1️⃣  make a  program to read  5 integers  from a file

#include <stdio.h>
int main(){
   FILE  *fptr ;
   fptr = fopen("file.txt" , "r");

   int n;
   fscanf(fptr , "%d" , &n);
   printf("%d\n" , n);

   fscanf(fptr , "%d" , &n);
   printf("%d\n" , n);

   fscanf(fptr , "%d" , &n);
   printf("%d\n" , n);

   fscanf(fptr , "%d" , &n);
   printf("%d\n" , n);

   fscanf(fptr , "%d" , &n);
   printf("%d\n" , n);

  

   fclose(fptr) ; 
    return 0 ;
}









// 👉👉  🔹🔹  Question 1️⃣ 2️⃣ 3️⃣ 4️⃣ 5️⃣ 6️⃣ 7️⃣ 8️⃣ 9️⃣ 🔟