#include <stdio.h>
int main(){
    int number ;
    printf( "Enter Number: " );
    scanf( "%d", &number );
    for ( int i = 0; i < number; i++ )
        printf( "Hello World\n" );
    return 0;
}