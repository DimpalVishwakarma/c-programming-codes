
// #include<stdio.h>

//     void anjali (){

//         printf("this is frist function\n");
//     }
//     int anjali1 (int roll){

    
//         printf("this is second function\n");
//         printf("my roll number is%d\n", roll);
            
//     }
//     int anjali2 (int a,int b){
//         printf("this is third function\n");
//         printf("this is sum is %d\n", a+b );
        
//     }
//         int  anjali3(){
//             printf("this is fourth function");
//             return 0;

//         }
//         int main(){
//             anjali();
//             anjali1(30);
//             anjali2(10,15);
//             anjali3();
        
//         return 0;
//     }

    
//  #include<stdio.h>   


// int janvi2(int n){
//      int counter=0;

//      for(int i=1;i<=n;i++){
//         if(n%i==0){
//             counter ++;
//         }
//     }
//         if(counter == 2){
//     printf("this is third function\n");
//     printf("%d is prime number \n",n);
//         }

//         else{
//             printf("%d is not a prime \n",n);
//         }
//     }



// int main(){
   
    
//     janvi2(3);
//     janvi2(5);
//     janvi2(8);  janvi2(9);  janvi2(0);  janvi2(1);  janvi2(2);  janvi2(7);  janvi2(11);  janvi2(45);
    
// return 0;
// }


// #include<stdio.h>
// int main(){
//     int arr[]={10,20,30,40,50,60,70};
//     printf("%d\n",arr[0]);
//     printf("%d\n",arr[1]);
//     printf("%d\n",arr[2]);
//     printf("%d\n",arr[3]);
//     printf("%d\n",arr[4]);
//     printf("%d\n",arr[5]);
//     printf("%d\n",arr[6]);
//     return 0;



// }

// #include<stdio.h>
// int main () {
//     int arr[]={10,20,30,40,50};
//     for(int i=0; i<5; i++){
//         printf("%d\n",arr[i]);
//     }
//     return 0;

// }

// #include<stdio.h>
// int main(){
//     int arr[10]; 
//     printf("enter the array element \n");
//     for (int i=0; i<10; i++){
//         scanf("%d\n",&arr[i]);
//     }
//     printf("array element is \n");
//     for (int i=0;i<10; i++){
//         printf("%d\n",arr[i]);
//     }
// return 0;
// }



// #include<stdio.h>
// int main(){

//     int arr1[]={10,20,30,40,50,60};
//     int arr2[5];

//     printf("enter the dynamic value \n");
// for(int i=0; i<5; i++){ 
     

//    scanf("%d",&arr2[i]);
// }


// printf(" this is static array\n");

//     for(int i=0; i<6; i++ ){
//         printf("%d",arr1[i]);
//     }

//     printf("this is dynamic array\n");

//     for(int i=0; i<5; i++){
         
// printf("%d",arr2[i]);
//     }
// return 0;
// }


// #include<stdio.h>
// int main(){
    
//    int num1 []={10,20,30,40,50};
//    int sum1=0;
   
// for(int i=0; i<5; i++){
//     sum1 = sum1+ num1[i];
//    }
//    printf("%d",sum1);

//    return 0;
// }



// <stdio.h> #include
// int main(){
//     int arr[]={1,3,5,7,9};
//     int max = arr[0];
    
//     for(int i=0; i<5; i++){
//         if (max<arr[i]){
//             max=arr[i];
//         }
//         }
//         printf("%d\n",max);
//         return 0;
//     }


// #include<stdio.h>
// struct student{
//     int id;
//     char name[10];
// };
// int main(){
//     struct student s1= { 12, "Dimpal"};
//         struct student s2;

//         printf("Enter ID");
//         scanf("%d", &s2.id);
//         printf("Enter name");
//         scanf("%s", &s2.name);

//  printf("students Details is:\n ID:%d,Name:%s" ,s1.id,s1.name);
//         return 0;
//     }


// #include<stdio.h>
// int main(){
//     FILE *p;
//     p=fopen("student.txt","w");
//     if(p==NULL){
//         printf("Error\n");
//         return 1;
//     }
//     p = fopen("anjali.txt", "r");
// if(p==NULL){
//     printf("Error");
// }
// else{
//     char ch;
//     print("Reading file");
// while((ch= fgetc(p))!=EOF){
//     putchar(p);
// }
// fclose(p);
// }
// p=fopen("anjalli.txt.","a");
// if(p!=NULL){
//     fprintf("This is Append");
//     fclose(p);
// }
// p= fopen("anjali.txt", "r+");
// if(p!=NULL){
//     fprintf(p,"R+ mode here");
//     fclose(p);
// }
// p=fopen("anjali.txt","w");
// if(p!=NULL){
//     fprintf("This is W+ mode");
//     rewind(p);
//     char ch;
//     printf(" reading file in w+ mode");
//     while ((ch= fgetc(p)!=EOF)){
//         putchar(p);
//     }
//     fclose(p);
// }
// p=fopen("anjali.txt","a+");
// if(P!==NULL){
//     fprintf(p,"Here is a+ mode");
//     rewind(p);
//     char ch;
//     printf("Reading with a+mode");
//     while((ch=getc(p))=EOF){
//         putchar(p);
//     }
//     fclose (p);
// }
// return 0;
  

// #include<stdio.h>
// int main(){

//     FILE *p;
//     p= fopen("Ram.txt","w+");
//     fputs("Ramgopal",p);
//     if(p==NULL){
//         printf("Error");
    
//     return 1;
// }
//     char ch[100];
//     printf("Reading file");
//     while(fgets(ch,sizeof(ch),p)){
//         printf("%s",ch);
//     }
//     fclose(p);
//     return 0;



//  #include<stdio.h>
//   int main(){
//     FILE *D;

//     D= fopen("Dimpal.txt","w+");

//     fputs ("Dimpalji",D);
//     if(D==NULL) {
//         printf("Error");
//         return 1;
//     }
//     char ch[100];
//     printf("Reading file");
//     while (fgets(ch,sizeof(ch),D)){
//         printf("%S",ch);
//     }
//     fclose(D);
//     return 0;
// }





//     p= fopen("anjali.txt","w+");
//     if(p==NULL){
//         printf("file not open");
    
//     return 1;
// }
//     char ch;
//     printf("Reading file");
//     while((ch=fgetc(p))!=EOF){
//         putchar(ch);
//     }
//     fclose(p);


    // p=fopen("anjali.txt","a+");
    // if(p!=NULL){
    //     fprintf(p,"Here is a+ mode");
    //     rewind(p);
    //     char ch;
    //     printf("Reading with a+mode");
    //     while((ch=fgetc(ch))=EOF){
    //         putchar(ch);
    //     }
    //     fclose (p);
    // }



//     return 0;
// }


//     #include<stdio.h>
//     int main(){
//         int n=1;
//         printf(" static value true case");
//         do{
//             printf("this loop run fil((count)\n",n);
//             n++;
//         }
//         while(n<=3);

//         printf("static value false case");
//         int n1=5;
//         do{
//         printf("this loop run fill(count=%d)\n",n);
//         n1++;
//     }
//     while(n<2);
    
//     return 0;
// }



// #include<stdio.h>
// int main(){
    
//     printf("size of char is:%d\n",sizeof (char));
//     printf("size of float is:%d\n",sizeof (float));
//     printf("size of double is:%d\n",sizeof (double));
//     printf("size of int is:%d\n",sizeof (int));
    
    

//     return 0;
// }



// #include<stdio.h>
// int main(){
//     int n1;
//     int n2;
//     char name[100]="Anjali rai";
//     printf("Hello %s,in the fisrst project\n",name);
//     printf("This is a basic calculater for addition of two number\n");
//     printf("Enter the first value ");
//     scanf("%d",&n1);
//     printf("Enter the second value ");
//     scanf("%d",&n2);
//     printf("sum of %d and %d is:%d\n ",n1,n2,n1+n2);
//     printf("thanks to use our project end !");
//     return 0;
// }



// #include<stdio.h>

//     void add()
//     {
//     int a=40,b=80,c;
//     c=a+b;

//     printf("%d",c);
// }
// void sub(){
//     int a=79,b=89,c;
//     c=a-b;
//     printf("%d",c);

// }
// int main(){
//     add();
//     sub();


// return 0;
// }

// #include<stdio.h>
// void anjali(){
//   printf("this is the first function\n");
// }
// int anjali1 (int roll ){
// printf("my roll number is %d\n",roll);
// printf("this is the second function\n");
// }
// int anjali2(int a ,int b){
// printf("this is the sum %d",a+b);
// printf("this is the third function\n");
// return 0;
// }

// int anjali3(){
//     printf("this is the fourth function\n");

//     return 0;
// }
// int main(){
    
//     anjali1(30);
//     anjali2(10,15);
//     anjali3();
    

// }

//airthmetic oprator
// #include<stdio.h>
// int main(){
//     int n1;
//     int n2;
//     printf("enter the first element\n");
//     scanf("%d",&n1);
//     printf("enter the second element\n");
//     scanf("%d",&n2);
//     int sum =n1+n2;
//     printf("sum of %d and %d is: %d\n",n1,n2,sum);
//     int sub =n1-n2;
//     printf("sub of %d and %d is: %d\n",n1,n2,sub);

//     return 0;
// }


// #include<stdio.h>
// int main(){
// int n1=20;
// int n2=30;
// printf("this is ==oprator%d\n",n1==n2);
// printf("this is >=oprator%d\n",n1>=n2);
// printf("this is <=oprator%d\n",n1<=n2);
// printf("this is >oprator%d\n",n1>n2);
// printf("this is <oprator%d\n",n1<n2);
// printf("this is !=oprator%d\n",n1!=n2);
// return 0;
// }



// #include<stdio.h>

//     int anjali1(int a ){
// // printf("enter the element\n");
//     // scanf("%d",&a    );
//     if(a==100){
//         printf("enter acces\n");
//      } else{
//             printf("enter  denied\n");

        
//     }
// }

// int main(){
//     anjali1(20);
//     return 0;
// }


// #include<stdio.h>
// int main (){
//     for(int i=0; i<5; i++){
//         for(int j=0; i<5; j++){
            
        
//          printf("* ") ;
//         }
//         printf("\n ");

//         }
    
//     return 0;
// }

// #include<stdio.h>
// int main (){
//     for(int i=1; i<=5; i++){
//         for(int j=1; j<=5-i; j++){
//             printf(" ");
//         }
//         for(int j=1; j<=2*i-1; j++){
//             printf("*");
//         }
//         printf("\n");
//         }
//         for(int i=5; i>=1; i--){
//             for(int j=1; j<=5-i; j++){
//                 printf(" ");
//             }
//             for(int j=1; j<=2*i-1; j++){
//                 printf("*");
//             }
//             printf("\n");
//         }
//         return 0;
//     }


    // #include<stdio.h>
    // int main (){
    //     for(int i=1; i<=5; i++){
    //         for(int j=1; j<=5-i; j++){
    //             printf(" ");
    //         }
    //         for(int j=1; j<=2*i-1; j++){
    //             printf("A");
    //         }
    //         printf("\n");
    //         }
    //         for(int i=5; i>=1; i--){
    //             for(int j=1; j<=5-i; j++){
    //                 printf(" ");
    //             }
    //             for(int j=1; j<=2*i-1; j++){
    //                 printf("B");
    //             }
    //             printf("\n");
    //         }
    //         return 0;
    //     }
    
        // #include<stdio.h>
        // int main (){
        //     for(int i=1; i<=5; i++){
        //         for(int j=1; j<=5-i; j++){
        //             printf(" ");
        //         }
        //         for(int j=1; j<=2*i-1; j++){
        //             // printf("A");
        //             printf("%d",j);
        //         }
        //         printf("\n");
        //         }
        //         for(int i=5; i>=1; i--){
        //             for(int j=1; j<=5-i; j++){
        //                 printf(" ");
        //             }
        //             for(int j=1; j<=2*i-1; j++){
        //                 // printf("B");
        //                 printf("%d",j);
        //             }
        //             printf("\n");
        //         }
        //         return 0;
        //     }
        
 
        // #include<stdio.h>
        // int main (){
        //     for(int i=1; i<=5; i++){
        //         for(int j=1; j<=5-i; j++){
        //             printf(" ");
        //         }
        //         for(int j=1; j<=2*i-1; j++){
        //             // printf("A");
        //             printf("%d",j);
        //         }
        //         printf("\n");
        //         }
        //         for(int i=5; i>=1; i--){
        //             for(int j=1; j<=5-i; j++){
        //                 printf(" ");
        //             }
        //             for(int j=1; j<=2*i-1; j++){
        //                 // printf("B");
        //                 printf("%d",j);
        //             }
        //             printf("\n");
        //         }
        //         return 0;
        //     }


// practice  coding//
// #include<stdio.h>
// int main(){
//     printf("anjali rai\n");
//     int num=40;
    // int a,b,c,d,e;
    // printf("enter the element\n");
    // scanf("%d %d %d %d %d",a,b,c,d,e);

    // int n1 is= english, n2 is = maths, n3 is  =hindi, n4  is= sanskrit n5 is =science;
    // printf("n1,n2,n3,n4,n5\n");
//     if(50>100){
//         printf("C grade\n");
//     }
//     else if(60>100){
//         printf("B grade\n");
//     }
//     else if (70>100){
//         printf("A gradea\n");
//     }
//     else if(80>70){
//         printf("great\n");
//     }
//     else {
//         printf("fail\n");
//     }
//     printf("\n total marks:%d\n ", total);
//     printf("")
//     // int avarge = a+b+c+d+e/500*100;
//    return 0;
// }
    

#include<stdio.h>
int main(){
    printf("anjali rai\n");
    // printf("enter the marks out of 100:\n");

    int english;
    printf("enter the marks of english\n");
    scanf("%d",&english);
    int hindi;
    printf("enter the marks of hindi\n");
    scanf("%d",&hindi);
    int sanskrit;
    printf("enter the marks of sanskrit\n");
    scanf("%d",&sanskrit);
    int science;
    printf("enter the marks of science\n");
    scanf("%d",&science);
    int bio;
    printf("enter the marks of bio\n");
    scanf("%d",&bio);
    int avg= (english+hindi+bio+sanskrit+science)/5;
    if(avg<50){
        printf("fail");
    }
        else if(avg<=60 && avg>=50){
            printf("grade c");
        }
        else if(avg<=70 && avg>=60){
            printf(" grade b");
        }
        else if(avg<=80 && avg>=70){
            printf(" grade a");
        }
            else if(avg>=80){
                printf(" great\n");
            }
            
            printf("total percentage: %d",avg);
            return 0;
        }
            


        
    






















    



   
    



   


  




    








        





