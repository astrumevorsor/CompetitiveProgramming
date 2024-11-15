//Single object deallocation code 
#include <iostream> //this is the standard library for input and output
int main(){
    int * ptr=new int; //dynamic memory allocation
    *ptr=5; //assigning value to the pointer
    std::cout<<*ptr<<std::endl; //printing the value of the pointer
    delete ptr; //deallocating the memory allocated
    //if you decide to have a pointer it becomes a dangling pointer
    ptr=nullptr; //setting the pointer to null
    return 0;
}
/*Note:
1. Deallocating memory does not set the pointer to null automatically.
2. It is a good practice to set the pointer to null after deallocation.
3. This is to avoid dangling pointer.
*/

/*When you allocate memory for a single object, you should delete it. This is because the memory is not automatically deallocated when the pointer is set to null.
This leads to memory leak. 
But when you allocate memory for an array, you should use delete[] to delete it.
*/

/*Key concepts*/
/*
1. Memory leak: When you allocate memory for a single object, you should delete it. This is because the memory is not automatically deallocated when the pointer is set to null.
This leads to memory leak. 
But when you allocate memory for an array, you should use delete[] to delete it.
2. Dangling pointer: When you delete a pointer, the pointer is not set to null automatically. This leads to dangling pointer.
3. Null pointer: When you set a pointer to null, it is a good practice to set the pointer to null.
*/


