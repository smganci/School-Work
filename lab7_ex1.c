
#include <stdio.h>  /* Need for standard I/O functions */
#include <string.h> /* Need for strlen() */
#define LEN 20 //the max input of digits is 20
//should len be 20 or 21
int a_to_i(char* str){
    //minus one is the null
    int length=strlen(str)-1;

    int j=0;

    int numArray[length];

    for(j=0;j<length;j++){
        //in askii chart 48 is zero
        numArray[j]= str[j]-48;
    }

    int sum=0;
    int multiple=1;
    int temp=0;

    for(j=length-1;j>=0;j--){
        temp= numArray[j];
        temp=temp*multiple;
        multiple=multiple*10;
        sum=sum+temp;

    }

    return sum;




}



char input [LEN];
int output;

main(){
    int i=1;

    while(i==1){
        fgets(input, LEN,stdin);

        output=a_to_i(input);

        if(output==0){
            i=0;
        }

        printf("%d\n", output);
     
    }

}
