#include<iostream>
using namespace std;
template <typename T, typename V>

class Pair{
    T x;
    V y;
    public:
    void setX( T x){
        this->x=x;

    }
    void setY( V y){
        this->y=y;

    }
    T getX(){
        return x;
    }
    V getY(){
        return y;
    }

};

int main(){
    Pair <int, double> p1;
    Pair <int, int> p2;
    Pair <Pair<int, string>, double> p3;
    Pair <int, string> p4;

    p1.setX(10);
    p1.setY(2000.20);
    p2.setX(100);
    p2.setY(10000);
    p3.setX(p4);
    p4.setX(2000);
    p4.setY("Nitish");
    p3.setX(p4);

    cout<<p1.getX()<<" "<<p1.getY()<<" "<< p2.getY()<<" "<<p3.getX().getX()<<" "<< p3.getX().getY();













}
