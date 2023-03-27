#include <stdio.h>
#include "osm.cpp"
#define ITERATIONS_OP 100000
#define ITERATIONS_FUNC 100000
#define ITERATIONS_SYS 100000


int main()
{
    std::cout<<"op time: "<<osm_operation_time(ITERATIONS_OP)<<std::endl;
    std::cout<<"func time: "<<osm_function_time(ITERATIONS_FUNC)<<std::endl;
    std::cout<<"sys time: "<<osm_syscall_time(ITERATIONS_SYS)<<std::endl;
    return 0;
}