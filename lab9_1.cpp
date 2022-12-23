#include<iostream>
using namespace std;

char findGrade(double grade){
    
    if (grade>90){
        return  'A';
    }
    
    else if(grade>75 && grade<=90){
        return 'B';
    }
    
    else if(grade>60 && grade<=80){
        return 'C';
    }
    
    else if(grade>45 && grade<=60){
        return 'D';
    }
    
    else if(grade<=45){
        return 'F';
    }
    else {return 'E';}
   
    
    
}
    
int main(){
    findGrade(25);
}
