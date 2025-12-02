#include <iostream>
#define GRADES_VEC 3

int main(){
    std::cout << "Welcome to MediaMaker!\n";

    double media;
    int *notas = new int[GRADES_VEC];


    for(int i= 0; i < GRADES_VEC; i++)
    {    
        std::cout << "\nInput the " << i+1 << " grade:\n";
        std::cin >> *(notas + i);

        if(*(notas + i) < 0 || *(notas + i) > 20)
        {
            std::cout << "Error: Insert a 0-20 value! Leaving you from program. . .\n";
            delete[] notas;
            return 1;
        }
    }

    int sum = 0;

    for(int j = 0; j < GRADES_VEC; j++)
    {
        sum += *(notas + j);
    }

    media = (double)sum / GRADES_VEC;

    std::cout << "\nMedia of class is " << media <<"\n";

    delete[] notas;

    return 0;
}