#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct creature
{
  int type;
  int room;
};
struct room
{
  int roomNum;
  int numOfAnimals;
  int state;
  int roomFull;
  int n;
  int s;
  int e;
  int w;
};
struct room* rooms;
struct creature* creatures;
int status = 40;
void changeStatus(int s)
{
  status = status + s;
}
void switchRoom(int d)
{
  int s =d;
  int i =0;
  int c =-1;
  while(c!=1)
    {
      c = creatures[i].type;
      ++i;
    }
  i = i - 1;
  
  if(s==1)
    {
      
    }
  else if(s==2)
    {
      
    }
  else if(s==3)
    {
      
    }
  else
    {

    }
}
void cleanRoom(int c)
{
  
}
void dirtyRoom(int c)
{

}
void look()
{
  
}
void creatureMove(int c)
{
  
}
void play()
{
  char move[10];
  int r = -1;
  char temp[10];
  while(strcmp(move,"quit")!=0)
{
  scanf("%s",temp);
  for(int i =0;i<10;++i)
    {
      if(temp[i]==':')
	{
	  r=atoi(temp);
	  strncpy(move,temp + (i+1), 9);
	  break;
	}
    }
  if(r<0)
    {
      strcpy(move,temp);
    }
  if(strcmp(move,"look")==0)
    {
      look();
    }
  else if(strcmp(move,"clean"))
    {
      cleanRoom(r);
    }
  else if(strcmp(move,"dirty"))
    {
      dirtyRoom(r);
    }
  else if(strcmp(move,"north")==0)
    {
      switchRoom(1);
    }
  else if(strcmp(move,"south")==0)
    {
      switchRoom(2);
    }
  else if(strcmp(move,"east")==0)
    {
      switchRoom(3);
    }
  else
    {
      switchRoom(4);
    }

 }  

}
int main( int argc, char *argv[])
{
  int r = 0;
  int c = 0;
  char str[10];
  int state = 0;
  printf("How many rooms do you want?\n");
  scanf("%d",&r);
  rooms =malloc(sizeof(struct room)*r);
  for(int i=0;i<r;++i)
    { 
      scanf("%d %d %d %d %d",&rooms[i].state,&rooms[i].n,&rooms[i].s,&rooms[i].e,&rooms[i].w); 
    }
  scanf("%d", &c);
  creatures = malloc(sizeof(struct creature)*c);
  for(int i=0;i<c;++i)
    {
      scanf("%d %d", &creatures[i].type, &creatures[i].room);
      rooms[creatures[i].room].numOfAnimals=+1;
    }
  play();
  free(rooms);
  free(creatures);
  return 0;
}
