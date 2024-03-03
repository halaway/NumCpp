#include "NumCpp.hpp"
#include <iostream>
#include <vector>
#include <cmath>


//g++ -std=c++17 my_program.cpp -o my_program
//using namespace nc_develop;

const double pi = 3.14;

int main(){

    nc::NdArray<double> array = {{1, 2, 3}};

    nc::NdArray<double> b = {{4, 5, 6}};

    nc::NdArray<double> c = {{7, 8, 9}};

  

    //nc::NdArray<double> d = nc::concatenate({c, c}, nc::Axis::ROW);


    // Print the array
    //std::cout << "Array:\n" << d << std::endl;

    // Perform some operations
    //auto sum = nc::sum(array);
    //std::cout << "Sum of array elements: " << sum << std::endl;


    // a.printInfo();

    // a.reshape(4, 3, 2);
    // a.printInfo();

    // b.printInfo();

    // try
    // {
    //     const std::vector<std::size_t> newDims = { 1, 2, 3 };
    //     b.reshape(newDims);
    // }
    // catch (const std::invalid_argument& err)
    // {
    //     std::cout << err.what() << '\n';
    // }

    // std::cout << a(0) << '\n';
    // std::cout << a(0, 0, 3) << '\n';
    // std::cout << a(1, 1, 1) << '\n';

    // try
    // {
    //     std::cout << a(1, 1) << '\n';
    // }
    // catch (const std::invalid_argument& err)
    // {
    //     std::cout << err.what() << '\n';
    // }

    // NdArray<int> array1d = { 1, 2, 3, 4, 5 };
    // array1d.printInfo();
    // utils::printContainer(array1d);

    nc::NdArray<int> array2d = {
        {1, 2, 3},
        {4, 5, 6}, 
        {7, 8, 9} 
    };

    // for (int i : array2d ){
    //     std::cout<<i<<std::endl;
    // }
   
    // utils::printContainer(array3d);

    // return EXIT_SUCCESS;
}
