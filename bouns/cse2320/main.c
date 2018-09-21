//Jian Ma
//1001532967
//project 01
//cse 2320


//the following comment is how to test this program on omega
//gcc -o main main.c
//./main
#include <stdio.h>
#include <stdlib.h>

struct value_index_pair{
    int value;
    int index;
};
//original quick sort sort by value
int cmpfunc(const void * a, const void * b){
   return (*(int*)a - *(int*)b );
}
//quick sort sort by index
int qsortindex(const void * p, const void * q){
   int l = ((struct value_index_pair *)p) ->index;
   int r = ((struct value_index_pair *)q) ->index;
   return(l - r);
}
//print function
void printarray(struct value_index_pair ps[], int size){
   int i = 0;
    for(i; i < size; i++){
        printf("value is %d  index is %d\t\n", ps[i].value , ps[i].index);
    }
}

//final print function
void finalprint(struct value_index_pair ps[], int size){
   int i = 0;
   printf("final print show no dupilicate value follow the order by index\n");
   printf("This size is %d\n", size);
   for(i; i < size; i++){
       printf("value is %d\n",ps[i].value);
   }
}
//remove the duplicate
void removeduplicate(struct value_index_pair ps[], int size){
    int i = 0;
    int j = 0;
    int size2 = 0;

    for(i; i < size; i ++){
        if(i != 0 && ps[i].value == ps[i - 1].value){
            continue;
        } else if(ps[i].value != ps[i - 1].value){
            ps[j].value = ps[i].value;
	    ps[j].index = ps[i].index;
	    j++;
        }
        size2 ++;
    }
    printf("size2 is %d\n", size2);
    printarray(ps, size2);
    qsort(ps, size2, sizeof(ps[0]), qsortindex);
    printf("\n");
    printarray(ps, size2);
    printf("\n");
    finalprint(ps, size2);
}



int main()
{
    int i = 0;
    int j = 0;
    int size = 0;
    printf("Please enter how many number do you want to enter\n");
    scanf("%d", &size);
    struct value_index_pair * sequence = malloc(size * sizeof(struct value_index_pair));

    struct value_index_pair * ps;

    ps = &sequence[0];




    printf("Please enter the number of each element in array\n");
    for(i; i < size; i++){
        ps[i].index = i;
        scanf("%d", &ps[i].value);
    }
    printarray(ps, size);

    printf("\n");
    qsort(sequence, size, sizeof(struct value_index_pair), cmpfunc);
    printf("\n");
    printarray(ps, size);
    removeduplicate(ps, size);


    return 0;
}
