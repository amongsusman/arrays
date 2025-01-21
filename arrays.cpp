/*
Name: Tyler Zhang
Program Name: Arrays Lab
Date: 1/21/25
Extra: None
*/

#include <iostream>
#include <ctime>
using namespace std;
int main() {
    srand(time(nullptr));
    // Question 1:
    // makes an array of size 10 with 10 random numbers from 1 to 10
    int nums[10] = {rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1, rand() % 10 + 1};
    for (int i = 0; i < (sizeof(nums) / sizeof(int)); i++) {
        cout << nums[i] << " ";
    }
    cout << "\n";
    for (int i = ((sizeof(nums) / sizeof(int)) - 1); i > -1; i--) {
        cout << nums[i] << " ";
    }
    cout << "\n";
    int evens = 0;
    for (int i = 0; i < (sizeof(nums) / sizeof(int)); i++) {
        // adds 1 to evens if the number is divisible by 2 
        evens += !(nums[i] & 1);
    }
    cout << evens << endl;
    // Question 2:
    float totalSales[7] = {74.49, 20.80, 50.46, 86.7, 49.50, 80.61, 91.15};
    string userInput;
    // a do while loop that at least runs once before the user has an option to exit the loop
    do {
        int day;
        cout << "Choose a day of the week (Monday - 1, Tuesday - 2, etc.)" << endl;
        cin >> day;
        cout << "The total sales for day " << day << " is $" << totalSales[day - 1] << "." << endl;
        cout << "Do you wish to continue?" << endl;
        cin >> userInput;
    } while (userInput != "No");
    // Question 3:
    // allocates 20 spaces of memory for integers that haven't been initialized yet
    int ages[20];
    int curAge;
    for (int i = 1; i < 21; i++) {
        cout << "Enter age #" << i << ":" << endl;
        cin >> curAge;
        // gets the index - 1 because arrays are 0-indexed
        ages[i - 1] = curAge;
    }
    int cnt = 0;
    for (int i = 0; i < (sizeof(ages) / sizeof(int)); i++) {
        cnt += (ages[i] > 15);
    }
    cout << cnt << endl;
    // Question 4:
    float finalGrade[6] = {85.8, 93.7, 76, 88.5, 100, 91.3};
    float avg = 0;
    for (int i = 0; i < (sizeof(finalGrade) / sizeof(float)); i++) {
        avg += finalGrade[i];
    }
    // rounds average to 1 decimal place (tenth)
    printf("The final grade average is %.1f.", avg / (sizeof(finalGrade) / sizeof(float)));
    return 0;
}