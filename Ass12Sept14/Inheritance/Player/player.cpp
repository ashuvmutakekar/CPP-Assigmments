#include "player.h"
Player::Player():name(""),age(0)
{

}
void Player::getPlayer()
{
 cout<<"Enter Information:"<<endl;
 cout<<"Enter Name :"<<endl;
 cin>>name;
 cout<<"Enter Age :"<<endl;
 cin>>age;
}
void Player::displayPlayer()
{
cout<<"Player Information :"<<endl;
cout<<"Name :"<<name<<endl;
cout<<"Age :"<<age<<endl;


}
