// ================================================
//               * Language: C
//               * Topic: File IO
// ===============================================

// 👉👉  🔹🔹  Question 1️⃣  make a  program to read  5 integers  from a file

// #include <stdio.h>
// int main(){
//    FILE  *fptr ;
//    fptr = fopen("file.txt" , "r");

//    int n;
//    fscanf(fptr , "%d" , &n);
//    printf("%d\n" , n);

//    fscanf(fptr , "%d" , &n);
//    printf("%d\n" , n);

//    fscanf(fptr , "%d" , &n);
//    printf("%d\n" , n);

//    fscanf(fptr , "%d" , &n);
//    printf("%d\n" , n);

//    fscanf(fptr , "%d" , &n);
//    printf("%d\n" , n);

  

//    fclose(fptr) ; 
//     return 0 ;
// }

// 👉👉  🔹🔹  Question  2️⃣  Make a program  to inpur student  information frrom
//  a user  & enter  it  to a file


#include <stdio.h>
int main(){
    FILE *fptr;
    fptr = fopen("student.txt" , "w");

    char name [50];
    int age;
    float cgpa;

    printf("Enter name : ");
    scanf( "%s" , name);

    printf("Enter age : ");
    scanf("%d" , &age);

   printf("Enter cgpa : " );
   scanf("%f" , &cgpa);

   fprintf(fptr ,"Student name : %s\t" , name);
   fprintf(fptr,"Student age : %d\t" , age);
   fprintf(fptr,"Student cgpa : %f\t" , cgpa);


    fclose(fptr);
    return 0;
}



// #include <stdio.h>
// int main(){
//     return 0;
// }




// 👉👉  🔹🔹  Question 1️⃣ 2️⃣ 3️⃣ 4️⃣ 5️⃣ 6️⃣ 7️⃣ 8️⃣ 9️⃣ 🔟