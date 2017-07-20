/* Example: bubble sort strings in array */

#include <stdio.h>  /* Need for standard I/O functions */
#include <string.h> /* Need for string functions */
#include <stdlib.h>

#define NUM 25   /* number of strings */
#define LEN 1000  /* max length of each string */

main()
{
  char* Strings[NUM];
  char temp[LEN];

  printf("Please enter %d strings, one per line:\n", NUM);

  /* Write a for loop here to read NUM strings, using fgets(). */

  int i;

  for (i=0; i<NUM;i++) {

    /* Read one line of input into a temp string that is long enough (LEN long) */

    fgets(temp, LEN, stdin);

    /* Allocate memory space for String[i] that is only large enough to copy the
       string just read into it.  Suppose the length of the string read into
       temp is "length", then you can use the following: */
    int length=strlen(temp);

    Strings[i] = malloc(length+1); /* Plus one for the NULL at end */
    
    int k;

//copy over the temp into the pointer/array at that index
    for (k=0; k<length;k++){
        Strings[i][k]=temp[k];
    }
    
  }

  puts("\nHere are the strings in the order you entered:");

  /* Write a for loop here to print all the strings. */

  for(i=0;i<NUM;i++){
      printf("%s",Strings[i]);
  }
  
  /* Bubble sort */
  /* Write code here to bubble sort the strings in ascending alphabetical order

     Your code must meet the following requirements:
        (i) The comparison of two strings must be done by strcmp() or strncmp().

       (ii) The swap of two strings must be done by swapping pointer values.
            You must not swap two string using strcpy()/strncpy() or using your 
            own loop to swap them a character at a time.
  */

  int j;
   for(i=0;i<NUM;i++){
      for(j=1;j<NUM-i;j++){
          int compvalue=strcmp(Strings[j],Strings[j-1]);

          if(compvalue<1){
              //swap the pointer values
              // c is going to be a pointer variable so when initializing or declaring, need to put *
              char * c= Strings[j];
              Strings[j]= Strings[j-1];
              Strings[j-1]= c;
          }

      }
   }

  
  
  /* Output sorted list */
  
  puts("\nIn alphabetical order, the strings are:");     
  /* Write a for loop here to print all the strings. */
  for(i=0;i<NUM;i++){
      printf("%s",Strings[i]);
  }


  /* Write a loop here to use free() to free up space allocated 
     for all of the strings above.  */

  for(i=0;i<NUM;i++){
      free(Strings[i]);
  }

  return 0;
}
