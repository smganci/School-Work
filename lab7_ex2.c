#include <stdio.h>  /* Need for standard I/O functions */
#include <string.h> /* Need for strlen() */
#define LEN 20 //the max input of digits is 20


//base tells us what to convert it to

void i_to_a(char *str, int num, int base){

    //use the base to find the remainder and then divide
    //this will put the digits in the string backwards, so we will have to reverse it as well

    if(num==0){
        str[0]='0';
        str[1]='\0'
    } else{
        int j=0;
        //int numbers [20];
        while(num>0){
            str[j]= (num%base)+ '0';
        //   printf("The str[i] is %i and the num that we have before dividing is %i", str[j], num);
            num=num/base;
        //    printf("the num after dividing by base is %i" ,num);
            j++;
        }

        //after this while loop goes we need to add the null character

        str[j]='\0';

        //need to reverse the numbers now
        int h=0;//start
        int k=strlen(str)-1;//end
        char temp;
        while(h<k){
            temp=str[h];
            str[h]=str[k];
            str[k]=temp;

            h++;
            k--;
        }
    }


   



}


main(){
    
    char output [LEN];
    int input;  
    int i=1;

    while(i==1){
        scanf("%i", &input);

        i_to_a(output,input,10);

        if(input<1){
            i=0;
            printf("%c\n\n", '0');
            break;
        }

        printf("%s\n", output);

    }
}
