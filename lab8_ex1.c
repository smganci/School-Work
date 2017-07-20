#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct point{
    int x;
    int y;
    struct point * next;
};

int distanceOf(struct point *input){
  // struct point a=*input;
    int x=input->x;
    x=x*x;
    int y=input->y;
    y=y*y;
    int sum= x+y;
    return sum;

}

main(){

    struct point * iterator;
    struct point start;

    int i=0;

    while(i>-1){
        int x1;
        int y1;

        scanf("%i%i",&x1,&y1);

        if(x1==0&&y1==0){
            if(i!=0){
                 iterator->next=NULL;
            }
           break;
        }

        if(i==0){  
            start.x=x1;
            start.y=y1;
            iterator=&start;
        }else{
            iterator->next=malloc(sizeof(struct point));
            iterator=iterator->next;   
            iterator->x=x1;
            iterator->y=y1;                      
        }

        i++;        

    }
    

    struct point * curr=&start;
    int j=0;

    if(i!=0){
        while(j==0){
            if(curr==NULL){
                break;
            }
            int d= distanceOf(curr);
            printf("%i\n",d);

            if(curr->next==NULL){
                break;
            }else{
                curr=curr->next;
            }
        }
    }
   


}
