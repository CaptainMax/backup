#include <sys/types.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <dirent.h>
#include <string.h>
#include <time.h>
#include <curses.h>
/*******************************************
 *Constant Definitions
*******************************************/
const int MAX_FILE_NAME =2048; //maximum length of a file/folder name
const int MAX_DIRECTORIES= 1024; //maximum files/folders being held
const int MAX_FILES= 1024; //maximum files/folders being held
const int PAGE_SIZE=6;//how many files/folders get printed at once.

/*******************************************
 *Function Prototypes
*******************************************/
void printArray(int limiter, char *myArray[MAX_DIRECTORIES]);
int printNext(int fileLimiter,int dirLimiter,char *myArrayFiles[MAX_DIRECTORIES],char *myArrayDir[MAX_DIRECTORIES],int start);


int main(int argc, char *argv[]){

   pid_t child; //process ID child
   DIR *d;// Directory stream can open directories
   struct dirent *de; //needs dirent.h to work. represent directory stream
   int i,c,k,storeDirID, storeFileID; //used for counters/loops
   char s[MAX_FILE_NAME];  //string that holds the user input
   char cmd[MAX_FILE_NAME]; //cmd is to hold the command for terminal
   char *directories[MAX_DIRECTORIES];
   char *files[MAX_FILES];
   int pageIndex=0;

   time_t t; //time stamp object
   storeDirID=0;
   storeFileID=0;



   while(1) {
    t=time(NULL);//get time from system
    printf("Time: %s\n", ctime(&t)); //ctime convert time to a readable string
    getcwd(s,200); //parse 200 characters of the current directory
    printf("\nCurrent Direcotry: %s \n",s);
    d=opendir("."); //open current working directory
    c=0;
    //collect info about directory in one llop as specified
    while((de=readdir(d))){
     //If it is a directory store in directory array
     if(((de->d_type) & DT_DIR)){
       printf("(%d Directory: %s)\n", c++,de->d_name);
       directories[storeDirID]=de->d_name;
       storeDirID++;
       }
     //If it is a file store in files array
     if(((de->d_type) & DT_REG)){
       printf("(%d File: %s) \n",c++, de->d_name);
       files[storeFileID]=de->d_name;
       storeFileID++;
     }
    }

    //printArray(storeDirID,directories);

    pageIndex=printNext(storeFileID,storeDirID,files,directories,0);
    pageIndex=printNext(storeFileID,storeDirID,files,directories,pageIndex);
    pageIndex=printNext(storeFileID,storeDirID,files,directories,pageIndex);
    pageIndex=printNext(storeFileID,storeDirID,files,directories,pageIndex);
    pageIndex=printNext(storeFileID,storeDirID,files,directories,pageIndex);
    printArray(storeFileID,files);
    closedir(d);
    printf("---------------------------------------\n");
    c=getchar(); getchar();

    switch(c){
       case 'q': exit(0); //exit application
       case 'e': printf("Edit what?: ");
                 scanf("%s",s);
                 strcpy(cmd,"pico "); //cmd is the string being send to the system
                 strcat(cmd, s); //now it cmd hold pico fileName
                 system(cmd); //make that string to a system call
                 break;
       case 'r': printf("Run what?");
                 scanf("%s",cmd);
                 system(cmd);
                 break;
       case 'c': printf("Change to?: ");
                 scanf("%s",cmd);
                 chdir(cmd);
                 break;

    }

   }//end of while(1) menu
}
/**********************************************
 *printArray(int,char *[1024])
 *
 *This functions prints out what is in the current array to the point of its limit
 *that is passed in
**********************************************/

void printArray(int limiter, char *myArray[MAX_DIRECTORIES]){
    int i=0;
    printf("Printing out directories stored in directoris array:\n");
    for(i=0;i<limiter;i++){
       printf("-%d %s\n",(i+1),myArray[i]);
    }
}

/**********************************************
 *int printNext(int,char *[1024])
 *
 *Prints the first 6 files/folders or hits the maximum limit
 *returns the integer of where the page is currently located
**********************************************/
int printNext(int fileLimiter,int dirLimiter,char *myArrayFiles[MAX_DIRECTORIES],char *myArrayDir[MAX_DIRECTORIES],int start){
    static int pgNum=0;
    int pageInc=0;//keeps track of current size of page
    int tempStart=start;
    printf("Printing Contents of the directory:\n");
    printf("---Files---\n");
    printf("Limiter: %d Start:%d \n",fileLimiter,start);
    for(;start<fileLimiter;start++){
     if(pageInc<=PAGE_SIZE){
       printf("-%d %s\n",(start+1), myArrayFiles[start]);
     }else{
       break;
     }
     pageInc++;
   }
  pageInc=0;
  start=tempStart;
  printf("---Folders---\n");
  for(;start<dirLimiter;start++){
   if(pageInc<=PAGE_SIZE){
      printf("-%d %s\n",(start+1), myArrayDir[start]);
     }else{
      break;
     }
   pageInc++;
  }
  pgNum++;
  printf("PageNumber: %d \n",pgNum);
  return start;
}
