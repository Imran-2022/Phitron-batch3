#include<bits/stdc++.h>
using namespace std;

class Shape{

    virtual void draw()=0;

    // this means shape class ke all child class should have a draw function ...! 
    // that's blue print. 
    // called pure virtual function.

    // than this automatically an abstract class. 
    // so can't create an object. that's interesting. 

};

class Cirlce : public Shape{
    public: 
    void draw(){
        cout<<"drawing a circle\n"<<endl;
    }
};

int main(){

    Cirlce s1;
    s1.draw();

    return 0;
}