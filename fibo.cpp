//
// Created by mohamed el haddadi on 3/24/2022.
//
#include <iostream>
int fibo( int n)
{
    if(n<2)
        return n;
    else
        return fibo(n-1)+ fibo(n-2);
}
int main()
{
    std::cout<<"put number :"<<endl;
    int n;
    std::cin>>n;
        std::cout<<fibo(n);


    return 0;
}
