#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int arr[5][4]={{2,42,56,15},
                {42,22,10,34},
                {67,89,45,78},
                {50,45,57,23},
                {5,45,60,23}
                };
bool visited[5][4];
int dx[]={-1,1,0,0,-1,-1,1,1};
int dy[]={0,0,-1,1,-1,1,-1,1};

//checking the base condition separately and also adding the
// condition whether this element is visited or not

bool valid(int x,int y)
{
   return (x>=0 && x<5 && y>=0 && y<4 && !visited[x][y]);

}
void dfs(int x,int y)
{
    //backtrack to the function called point
    //if the element is visited
    
    if(visited[x][y]) return;
    visited[x][y]=1;

 //iterating through the adjacency matrices
 //dx and dy
 
    for(int i=0;i<8;i++)
    {
        int next_x=x+dx[i];
        int next_y=y+dy[i];
        
        //if it is true then preparing
        //for DFS
        
        if(valid(next_x,next_y))
                {
                    //condition for my dfs
                    
                if(arr[next_x][next_y]<18 || arr[next_x][next_y]>50 )
                {
                
                //will run until get all the neighbours.
                
                  dfs(next_x,next_y);

                }
                            }

                }




}



int main()
{
int count=0;
int i,j;
cout<<"enter the position of the muffler man :";
cin>>i>>j;

//calling the function
//with the position of the muffler man

dfs(i,j);

//this is the trick I used here
// to traverse over my visited array
// increase my count when I got visited beds

     for(int i=0;i<5;i++)
    {
        for(int j=0;j<4;j++)
        {
           if(visited[i][j]==1)
                count++;
        }

            }
            //here why I subtract 1
            //because suppose from which cell I  am calling dfs
            // that particular cell will also count as visited cell
            //but I need only the neighbors cells count excluding muffler man count
            // (as muffler man count is 1 so I subtract 1 from total count)
            
             cout<<"it will affect "<<count-1<<" people";

}
