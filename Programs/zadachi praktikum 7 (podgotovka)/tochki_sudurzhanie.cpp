#include <iostream>
#include <math.h>

int main()
{
    //zad 1 - kvadrat
    
    int x_square_begin, y_square_begin;
    int square_side_length;

    int x_point,y_point;

    // std::cin>>x_square_begin>>y_square_begin;
    // std::cin>>square_side_length;

    // std::cin>>x_point>>y_point;

    // if (x_point > x_square_begin && 
    //     y_point > y_square_begin) {

    //         if (x_point < x_square_begin + square_side_length && 
    //             y_point < x_square_begin + square_side_length) {
    //                 std::cout<<"sudurzha se.";
    //             } else {
    //                 std::cout<<"ne se sudurzha.";
    //             }
    // } else {
    //     std::cout<<"ne se sudurzha.";
    // }

    // zad 1 - okruznost

    // int x_circle_begin, y_circle_begin;
    // int circle_radius;

    // // int x_point,y_point;

    // std::cin>>x_circle_begin>>y_circle_begin;
    // std::cin>>circle_radius;

    // std::cin>>x_point>>y_point;

    // if (sqrt( (x_circle_begin - x_point)*
    // (x_circle_begin - x_point) + 
    // (y_circle_begin - y_point) * 
    // (y_circle_begin - y_point) ) < circle_radius ) {
    //     std::cout<<"sudurzha se.";
    // } else {
    //     std::cout<<"ne se sudurzha.";
    // }

    // zad 1 - triugulnik

    double x1,y1;

    std::cin>>x1>>y1;
    std::cin>>x_point>>y_point;

    if (x_point > 0 && y_point > 0) {
            if ( y1 * ( 1 - (x_point/x1) ) < y_point) {
                std::cout<<"sudurzha se.";
            }
            else {
        std::cout<<"ne se sudurzha.";
    }

    } else {
        std::cout<<"ne se sudurzha.";
    }

    return 0;
}