//krug presichast se s kvadrat

#include <iostream>

int main()
{

    int x_circle, y_circle, radius;
    int x1_square, y1_square, square_side_length;

    std::cin>>x1_square>>y1_square>>square_side_length;
    std::cin>>x_circle>>y_circle>>radius;

    int x2_square = x1_square + square_side_length;    
    int y2_square = y1_square + square_side_length;    

    bool f1=((x1_square - x_circle)*(x1_square - x_circle)+(y1_square - y_circle)*(y1_square - y_circle) <= radius*radius), //dolen lqv
    f2=((x1_square - x_circle)*(x1_square - x_circle)+(y2_square - y_circle)*(y2_square - y_circle) <= radius*radius),  // goren lqv
    f3=((x2_square - x_circle)*(x2_square - x_circle)+(y2_square - y_circle)*(y2_square - y_circle) <= radius*radius),  //goren desen
    f4=((x2_square - x_circle)*(x2_square - x_circle)+(y1_square - y_circle)*(y1_square - y_circle) <= radius*radius); // dolen desen


    if (f1==1 && f2==1 && f3==1 && f4==1 ) {
        std::cout<<"no"<<std::endl;
        return 0;
    }

    if (f1==1 || f2==1 || f3==1 || f4==1 ) {
        std::cout<<"yes"<<std::endl;
        return 0;
    }

    for (int i =x1_square; i < x2_square; i++) {

    }

    for (int i = ) {

    }


    return 0;
}