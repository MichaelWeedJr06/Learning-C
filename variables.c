#include <stdio.h>
#include <stdbool.h>
int main() {
    // variable = A reusable container for a value.
    //            Behaves as if it were the value it contains.

    int age = 25;
    int year  = 2025;
    int quantity = 1;

    printf("You are %d years old\n", age);
    printf("The year is %d\n", year);
    printf("You have ordered %d x items\n", quantity);

    float gpa = 2.5;
    float price = 19.99;
    float temperature = -10.1;

    printf("Your gpa is %.1f\n", gpa);
    printf("The price is $%.2f\n", price);
    printf("The temperature is %.1fF\n", temperature);

    double pi = 3.14159265358979;
    double e = 2.7182818284590;

    printf("The value of pi is %.15lf\n",pi);
    printf("The value of e is %.15lf\n", e);


    char grade = 'A';
    char symbol = '!';
    char currency = '$';

    printf("Your grade is %c\n", grade);
    printf("Your favorite symbol is %c\n", symbol);
    printf("The currency is %c\n", currency);

    char  name[] = "Michael Weed";

    printf("Hello %s\n", name);

    bool isOnline = true;

    printf("%d", isOnline);
    
    return 0;
}