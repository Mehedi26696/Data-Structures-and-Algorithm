//copy constructor
//it creates autometically when we called man m2(m1)



#include<bits/stdc++.h>
using namespace std;
class man {
    //properties
    private:
    int health;
    public:
    char level;

    man(){
        cout<<"Simple Constructor Called"<<endl;
    }
    
    //parameterised constructor
    man(int health,char level){
       
      // cout<<"The address of  this : "<<this<<endl;
       this->health = health;
       this->level =level;
    }

    void print(){
        cout<<"Health is : " <<this->health<<endl;
        cout<<"Level is : "<<this->level<<endl;
    }

    int getHealth(){

        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }
};
int main()
{   
    
    man m1(70,'C');
    // m1.setHealth(20);
    // m1.setLevel('A');
    m1.print();

    //copy constructor
    man m2(m1);
    m2.print();
    

 

    
    return 0;
}