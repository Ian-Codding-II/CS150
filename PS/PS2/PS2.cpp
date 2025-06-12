#include <iostream>
using namespace std;
void Jack();
void Malt();
void Rat();
void Cat();
void Dog();
int main()
{
    
    cout <<"This is the house that Jack built.\n"<< endl;
    cout <<"This is the malt\n";
    Jack();
    cout <<"\n";

    cout <<"This is the rat,\n";
    Malt();
    Jack();
    cout<<"\n";

    cout <<"This is the cat,\n";
    Rat();
    Malt();
    Jack();
    cout<<"\n";
    
    cout <<"This is the dog,\n";
    Cat();
    Rat();
    Malt();
    Jack();
    cout <<"\n";

    cout <<"This is the cow with the crumpled horn,\n";
    Dog();
    Cat();
    Rat();
    Malt();
    Jack();
    cout <<"\n";

    cout <<"This is the maiden all forlorn\n"
    <<"That milked the cow with the crumpled horn,\n";
    Dog();
    Cat();
    Rat();
    Malt();
    Jack();
 
    return 0;

}
void Jack()
{cout<<"That lay in the house that Jack built.\n";}
void Malt()
{cout <<"That ate the malt\n";}
void Rat()
{cout << "That killed the rat,\n";}
void Cat()
{cout<<"That worried the cat,\n";}
void Dog()
{cout << "That tossed the dog,\n";}