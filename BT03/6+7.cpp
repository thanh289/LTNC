#include <bits/stdc++.h>
using namespace std;


struct Point
{
    int x, y;
};


struct Rect
{
    int x, y, w, h;
};


struct Sh
{
    Rect pos;
    string id;
    int dx, dy;
    
    void move()
    {
        pos.x += dx;
        pos.y += dy;
    }
   
};


void display(const Sh& ship)
{
    cout<<"Posistion: ("<<ship.pos.x<<", "<<ship.pos.y<<") \n";
    cout<<"Id: "<<ship.id<<endl;
}

int main()
{
    Sh ship1;
    ship1.pos.x = 20;
    ship1.pos.y = 15;
    ship1.pos.w = 10;
    ship1.pos.h = 15;
    ship1.id = "13x0d3d";
    ship1.dx = 2;
    ship1.dy = 3;

    Sh ship2;
    ship2.pos.x = 10;
    ship2.pos.y = 40;
    ship2.pos.w = 20;
    ship2.pos.h = 25;
    ship2.id = "12x0d3d";
    ship2.dx = 4;
    ship2.dy = 1;


    int loop; 
    cout<<"Times of moving: ";
    cin>>loop;

    for(int i=1; i<=loop; i++)
    {
        cout<<"Time "<<i<<":"<<endl;
        cout<<"\tShip 1:"<<endl;
        ship1.move();
        display(ship1);

        cout<<"\tShip 2:"<<endl;
        ship2.move();
        display(ship2);
    }

}
