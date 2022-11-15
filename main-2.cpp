#include <iostream>
#include <string.h>
#include <iomanip>

#include"student.h"
#include"sorting.h"


using namespace std;
int x = 0; 
int main(int argc, char **argv) {
  
// after compile the file, paste this line to the console:
// ./main Michael 70 Jeng 90  Pan 25 Nai 40

  if(argc>1){ 
    int i,c,j,n;
    student *p= new student[(argc-1)/3]; 
    student a[20];
    p=a;
    for(c=0,i=1;i<(argc-1);c++,i+=2){ 
      p[c].set_all(argv[i],atoi(argv[i+1]));
      }
    for(c=0,i=1;i<(argc-1);c++,i+=2){ 
      cout<<c+1<<" ";  
      (p+c)->print_all();  
      x=c;
      }
      x+=1;
       //sorting.h function
    scoreSort(a,x);
    }
  }