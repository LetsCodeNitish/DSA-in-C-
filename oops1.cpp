#include <iostream>
using namespace std;

class Hero{
    int health;
    public:
    char level;
    Hero(){
        cout<<"Constructor Called"<<endl;
    }
    Hero(int health, char level){
        this->health=health;
        this->level=level;

        cout<<"Constructor Called again"<<endl;
    }
    Hero(Hero &h2){
        this->health=h2.health;
        this->level=h2.level;
    }
    int gethealth()
    {
        return health;
    }
    int getlevel()
    {
        return level;
    }
    void sethealth(int h)
    {
        health =70;
    }
    void setlevel(char a)
    {
        level = 'A';
    }

};

int main()
{
   
    Hero h2(70, 'A');
    Hero h1(h2);

    
    h1.level='A';
    cout << "Size:"<< sizeof(h1)<<endl;
    cout << "Health:"<< h1.gethealth()<<endl; // accesssing private varaible.....
    cout << "Level:"<< h1.level<<endl;
    
    // (*h2).level='B';
    // cout << "Size:"<< sizeof(h2)<<endl;
    // cout << "Health of 2nd Hero:"<< (*h2).gethealth()<<endl; // accesssing private varaible.....
    // cout << "Level:"<< (*h2).level<<endl;
    
    
   

}