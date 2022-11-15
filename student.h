#ifndef student_h
#define student_h

#include <iostream>
#include <iomanip>
using namespace std;

class student{
private: 

  string Name;
  int Score;
  int Anxiety;

public:
void setName(string name){ 
  Name = name;
}
string getName(){ 
  return Name;
}
void setScore(int score){ 
  Score = score;
}
int getScore(){ 
  return Score;
}

//};


/*void introduce(){
  cout<<endl<<"Name "<<setw(8)<<Name<<endl;
  cout<<"    Score "<<setw(8)<<Score<<endl;

  
}*/

student(string, int,int);

student(string = "-",int =0);/*{
  Name = a;
  Score = b;
  
  if(b>50) Anxiety=0;
  else if (b<50)Anxiety=100;
  //else Anxiety=(100-(Score*2));


  
}*/

void set_all(string n, int a){
    setName(n);
    setScore(a);

}
void print_all(){
  int anx;
  if(Score<50){
    anx = (100-(Score*2));
 		cout<<"Name: "<<setw(8)<<Name<<"    Score: "<<setw(8)<<Score<<"  Anxiety:  "<<setw(4)<<anx<<endl;}
  else cout<<"Name: "<<setw(8)<<Name<<"    Score: "<<setw(8)<<Score<<"  Anxiety:  "<<setw(4)<<Anxiety<<endl;

  }

/*void student::print_all(){
 		cout<<"Name: "<<setw(8)<<Name<<"    Score: "<<setw(8)<<Score<<"  Anxiety:  "<<setw(8)<<Anxiety<<endl;

  }*/

};

student::student(string n,int s,int a){
  Name = n;
  Score = s;
  Anxiety=a;
  if(Score<50) a=0;
  else a=(100-(Score*2));

  
}
student::student(string a, int b){
  Name = a;
  Score = b;
  Anxiety = 0;
  /*cout<<endl;
  cout<<b<<endl;*/
  //else Anxiety=(100-(Score*2));


  
}

#endif