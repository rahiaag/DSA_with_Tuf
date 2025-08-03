/* This function is invoked by passing the address of the variable.
    You need to increment the value stored in the variable by 10 */

// Don't need to write whole code only write
// your logic inside updateVar()

void updateVar(int *a) {
    // Write your logic here Increment the
    // value pointed to by 'a' by 10
    int b=10;
    int *c=&b;
   *a=*a+*c;
}