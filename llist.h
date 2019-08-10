pragma once
#ifndef LINKEDLIST
#define LINKEDLIST
namespace listspace
{
class node
{
public:
node(node* l = nullptr, int d = 0)
{data = d; link = l;}
void setdata(int v) 
{ data = v; }
int getdata() 
{ return data; }
void setlink(node* v)
{ link = v; }node* getlink() 
{ return link; }

private:
int data;
node* link;

};
void listheadinsert(node* &headpointer, int d)
{headpointer = new node(headpointer, d);}
int listlength(node* ptr)
{int length = 0;
while (ptr != nullptr)
{length++;
ptr = ptr->getlink();}
return length;}

}
#endif
