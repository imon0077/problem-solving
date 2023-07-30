/*
problem Name : calculate the sum of the first N natural numbers
link : https://ostad.app/dashboard/my-courses/648eb011f42b94819526c62a/module/648eb011f42b94819526c62e/assignment/648eb011f42b94819526c632
Description : 
    Write a function to calculate the sum of the first N natural numbers.
    In this problem, you need to implement the sum_of_natural_numbers function and calculate the sum of the first N natural numbers. The function should take an integer n as input and return the sum of the numbers from 1 to N.
    
    Make sure to consider both the time complexity (how long it takes to run the function) and the space complexity (how much memory is used) in your solution.

    Hint: You can use a simple loop to add the numbers from 1 to N iteratively. Think about the time complexity of the loop and whether there is any additional space used to store variables during the calculation.
*/
#include<iostream>
using namespace std;

int sum;
int sum_of_natural_numbers(int n){
    sum = 0;
    for (int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}

int main(){

    sum_of_natural_numbers(5);

    cout << "The sum of the first N natural numbers : " << sum << endl;
    
    return 0;
}

// Time complexity : O(n)
// Space complexity : O(1)