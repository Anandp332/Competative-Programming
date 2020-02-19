#include<iostream>
using namespace std;
int main(){
    int i = 10;// static allocation
    int* p = new int;// dynamic allocation of integer type 
    *p =10;// initialize value
    cout<<*p<<endl;
    double* pd = new double;//dynamic allocation of double type 
    *pd = 2.3;//initialize value
    cout<<*pd<<endl;
    char* c = new char;
    *c = 'a';
    cout<<*c<<endl;//It will return stored data in heap.
    cout<<c<<endl;// it will also return stored data in heap.


    // Allocation of array in heap in runtime 
    int n;
    cin>>n;// taking input size of array
    int *ar =new int[n]; // creating n size of array in heap 
    for(int i=0;i<n;i++){
        cin>>ar[i];// taking array input
    } 
    cout<<ar[0]<<endl;
    ar[0] = 12;//reinitialize the value of ar at 0th position
    cout<<ar[0];

    // Difference between static and Dynamic memory allocation
    /*while(true){
        int cg= 25;
    } // it will use max 4 byte storage max at a time and it will delete allocated memory after ending scope
    */
   /*
    while(true){
        int* cg=new int ;
        *cg = 25;
    } // it will allocate 4 byte storage in heap and without deleting that space pointer will delete and allocate one more at second time and so on..
      // one time heap space will be full and program will gone crash
    )*/
    // main difference b/w Dynamic and static storage is static will release at end of scope and in dynamic you should manually deallocate.  
    // delete the dynamic memory
    delete p; //deleting integer type alllocated memory(it will delete only memory not pointer)
    delete pd; //deleting double type alllocated memory(it will delete only memory not pointer)
    delete c; //deleting character type alllocated memory(it will delete only memory not pointer)
    delete [] ar; //deleting integer type of array  alllocated memory(it will delete only memory not pointer)
    p = new int ;
    delete p; //it will delete only memory not pointer
    ar = new int[n];
    delete [] ar;//it will delete only memory not pointer


    
}