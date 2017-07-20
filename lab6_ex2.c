/* Example: bubble sort strings in array */

#include <stdio.h>  /* Need for standard I/O functions */
#include <string.h> /* Need for strlen() */



#define NUM 25   /* number of strings */
#define LEN 1000  /* max length of each string */

main()
{
  char Strings[NUM][LEN];

  printf("Please enter %d strings, one per line:\n", NUM);

  /* Write a for loop here to read NUM strings.

     Use fgets(), with LEN as an argument to ensure that an input line that is too
     long does not exceed the bounds imposed by the string's length.  Note that the
     newline and NULL characters will be included in LEN.
  */

  int i;
  for(i=0;i<NUM;i++){
      fgets(Strings[i],LEN,stdin);
  }


  puts("\nHere are the strings in the order you entered:");

  /* Write a for loop here to print all the strings. */

  for(i=0;i<NUM;i++){
      printf("%s",Strings[i]);
  }

  /* Bubble sort */
  /* Write code here to bubble sort the strings in ascending alphabetical order

     Your code must meet the following requirements:
        (i) The comparison of two strings must be done by checking them one
            character at a time, without using any C string library functions.
            That is, write your own while/for loop to do this.
       (ii) The swap of two strings must be done by copying them 
            (using a temp variable of your choice) one character at a time,
            without using any C string library functions.
            That is, write your own while/for loop to do this.
      (iii) You are allowed to use strlen() to calculate string lengths.
  */

  
  int j;

  for(i=0;i<NUM;i++){
      for(j=1;j<NUM-i;j++){
          
          
          int compvalue=strcmp(Strings[j],Strings[j-1]);
          /* compvalue
          -1 if Strings[j] is less than Strings[j-1] (need to be swapped)
          0 if they are the same
          1 if Strings[j] is greater than Strings[j-1] (correct order)

          */

        

          /*
          need to account for situation where the other string is longer
          if other string was longer but the same it would be zero
          and if we want to swap that along with things that are -1,
          if they are the same word it would also be zero and it wouldnt really matter if you swapped
          so just swap when compvalue is less than one and wont need to worry about weird set of if statements
          */


          //this if statement does the swap 
          if(compvalue<1){
           
            char c[LEN];
    
            strcpy(c, Strings[j]);
            strcpy(Strings[j],Strings[j-1]);
            strcpy(Strings[j-1],c);
              
          }
      }
  }
  
  /* Output sorted list */
  
  puts("\nIn alphabetical order, the strings are:");     
  /* Write a for loop here to print all the strings. Feel free to use puts/printf
     etc. for printing each string.
  */

  for(i=0;i<NUM;i++){
      printf("%s",Strings[i]);
  }

  return 0;
}
