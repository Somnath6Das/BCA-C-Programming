#include <stdio.h>

union Job
{
    float salary;
    int workerNo;
} j;

int main() {
    j.salary = 12.3;

    // when j.workerNo is assigned a value,
    // j.salary will no longer hold 12.3,
    j.workerNo = 100;
    printf("Number of workers = %d", j.workerNo);
    return 0;
    
}
