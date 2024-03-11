#include<cs50.h>
#include<stdio.h>
#include<string.h>

int points[]={1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

int caPonts(string world)
{
    int lon = strlen(world);
    int alPoint = 0;

    for(int i=0; i < lon; i++)
    {
        if(world[i]>='A' && world[i]<='Z')
        {
            int x = world[i]-'A';
            alPoint += points[x];
        }
        else if(world[i]>='a' && world[i]<='z')
        {
            int x = world[i]-'a';
            alPoint += points[x];
    }
}
    return alPoint;
}

int main(void)
{
  string world1 = get_string(" Player1: ");
  string world2 = get_string(" Player2 ");
  int x1 = caPonts(world1);
  int x2 = caPonts(world2);

  if( x1 > x2)
  {
    printf("Winne : 1\n");
  }
  else if(x1 < x2)
  {
  printf("Winne : 2\n");
  }
  else
  {
     printf("tie\n");
  }

}
