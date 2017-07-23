Reverse digits of an integer.

Example1:

x = 123,

return 321
Example2:

x = -123,

return -321

Return 0 if the result overflows and does not fit in a 32 bit signed integer

/**
 * @input A : Integer
 * 
 * @Output Integer
 */
int reverse(int A) {
 long long int b=0;
    if(A>=0){
        //printf("yes");
        //int b=0;
        while(A){
            b = b*10 + A%10;
            A = A/10;
        }
        if(b<= 2147483647 && b >= -1<<31-1) {return b; }
        else return 0;
        
    }
    else {
        A = A*-1;
        //int b=0;
        while(A){
            b = b*10 + A%10;
            A = A/10;
        }
        b = b*-1;
        if(b<= 1<<31-1 && b >= -1<<31-1) {return b; }
        else return 0;
    }
   else return 0;
}

