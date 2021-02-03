#include<iostream>

bool rt_true(){ return true; }

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
