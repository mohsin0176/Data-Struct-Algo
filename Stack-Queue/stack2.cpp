#include <iostream>
using namespace std;
int stack[100], n=100, top=-1;
//In the above program, the push() function takes argument val i.e. value to be pushed into the stack.
//If a top is greater than or equal to n, there is no space in a stack and overflow is printed.
//Otherwise, val is pushed into the stack. The code snippet for this is as follows.
void push(int val) {
   if(top>=n-1)
   cout<<"Stack Overflow"<<endl;
   else {
      top++;
      stack[top]=val;
   }
}
//The pop() function pops the topmost value of the stack, if there is any value.
//If the stack is empty then underflow is printed.
//This is given as follows.
void pop() {
   if(top<=-1)
   cout<<"Stack Underflow"<<endl;
   else {
      cout<<"The popped element is "<< stack[top] <<endl;
      top--;
   }
}
//The display() function displays all the elements in the stack.
//It uses a for loop to do so. If there are no elements in the stack,
//then Stack is empty is printed. This is given below.
void display() {
   if(top>=0) {
      cout<<"Stack elements are:";
      for(int i=top; i>=0; i--)
      cout<<stack[i]<<" ";
      cout<<endl;
   } else
   cout<<"Stack is empty";
}
//The function main() provides a choice to the user if they want to push, pop or display the stack.
//According to the user response, the appropriate function is called using switch.
//If the user enters an invalid response, then that is printed.
//The code snippet for this is given below.
int main() {
   int ch, val;
   cout<<"1) Push in stack"<<endl;
   cout<<"2) Pop from stack"<<endl;
   cout<<"3) Display stack"<<endl;
   cout<<"4) Exit"<<endl;
   do {
      cout<<"Enter choice: "<<endl;
      cin>>ch;
      switch(ch) {
         case 1: {
            cout<<"Enter value to be pushed:"<<endl;
            cin>>val;
            push(val);
            break;
         }
         case 2: {
            pop();
            break;
         }
         case 3: {
            display();
            break;
         }
         case 4: {
            cout<<"Exit"<<endl;
            break;
         }
         default: {
            cout<<"Invalid Choice"<<endl;
         }
      }
   }while(ch!=4);
   return 0;
}
