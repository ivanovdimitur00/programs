#include <iostream>

int arr[5][5]=
{ 
{1,0,1,1,1},
{1,0,1,0,1},
{1,0,1,0,1},
{1,0,1,0,1},
{1,1,1,0,1}
};

int n = 5;

bool has_path (int start_x,int start_y,
               int end_x, int end_y)
 {

     if (arr[start_x][start_y] == 0) {
         return false;
     }

     if (arr[end_x][end_y] == 0) {
         return false;
     } 

    if (arr[start_x][start_y+1] == 1 &&    //lqwo
        start_x >=0 && start_x <=4 &&
        start_y+1 >= 0 && start_y+1 <= 4 &&
        start_x != end_x && start_y+1 != end_y) {
            
            arr[start_x][start_y] == 0;

            return has_path (start_x,start_y+1,
               end_x,end_y);
        }

    if (arr[start_x][start_y-1] == 1 &&    //dqsno
        start_x >=0 && start_x <=4 &&
        start_y-1 >= 0 && start_y-1 <= 4 &&
        start_x != end_x && start_y-1 != end_y) {
            
            arr[start_x][start_y] == 0;

            return has_path (start_x,start_y-1,
               end_x,end_y);
        }

    if (arr[start_x-1][start_y] == 1 &&    //nagore
        start_x-1 >=0 && start_x-1 <=4 &&
        start_y >= 0 && start_y <= 4 &&
        start_x-1 != end_x && start_y != end_y) {
           
           arr[start_x][start_y] == 0;

            return has_path (start_x-1,start_y,
               end_x,end_y);
        }
    
    if (arr[start_x+1][start_y] == 1 &&    //nadolu
        start_x+1 >=0 && start_x+1 <=4 &&
        start_y >= 0 && start_y <= 4 &&
        start_x+1 != end_x && start_y != end_y) {
           
            arr[start_x][start_y] == 0;

            return has_path (start_x+1,start_y,
               end_x,end_y);
        }

    return true;
 }

int main()
{
    int start_point[2];
    int end_point[2];

    std::cin>>start_point[0]>>start_point[1];
    std::cin>>end_point[0]>>end_point[1];
    
   std::cout<<has_path(start_point[0],start_point[1],
             end_point[0],end_point[1]);
}