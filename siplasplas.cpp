#include<iostream>

int max_of_two(int,int);

bool rt_true(){return true; }
int rt_zero(){ return 0; }

int main(){

    std::cout<<"Hi Woe!\n";
    std::cout<<"im awesum\n";

    int i = rt_zero();
    std::cout<< i << std::endl;

    bool bull = rt_true;
    std::cout<< bull <<std::endl;

    return 0;
}

int max_of_two(int a, int b){
    if (a>b)
        return a;
    else
        return b;
}