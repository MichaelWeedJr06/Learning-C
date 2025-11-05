#include <stdio.h>

typedef int Number;
typedef char* String;

int main(){

    // typedef = reserved keyword that gives an existing datatype a "nickname"
    //           Helps simplify complex types and improves code readability

    //          typedef existing_type new_name;



    // Number x = 3;
    // Number y = 4;
    // Number z = x+y;
    
    // printf("%d", z);

    String name = "Michael Weed";

    printf("%s", name);

    String user1 = "BC";
    

    return 0;
}