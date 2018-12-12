#include <iostream>
#include "stacktype.cpp"
using namespace std;

bool areParanthesisBalanced(string expr)
{
    StackType<char> s;
    char x;


    for (int i=0; i<expr.length(); i++)
    {
        if (expr[i]=='(')
        {

            s.Push(expr[i]);
            continue;
        }


        if (s.IsEmpty())
           return false;


switch (expr[i])
        {
        case ')':

        x = s.Top();
            s.Pop();

    break;

        default:
            return false;
        }
    }


    return (s.IsEmpty());


}

int SumOdd(StackType<int> s){

    int sum=0;

while(!s.IsEmpty()){

    if(s.Top()%2!=0){
        sum=sum+s.Top();
        s.Pop();
    }
    else
       s.Pop();

}

return sum;
}


int main()
{
    StackType<int> s;

    if(s.IsEmpty())
        cout<< "Empty stack";

   else
    cout<< "not empty";

   s.Push(5);
   s.Push(7);
   s.Push(4);
   s.Push(2);

   cout<<"\n";


    StackType<int> s1;

 while(!s.IsEmpty())
 {
     int top;
     top = s.Top();
     s1.Push(top);
     s.Pop();
 }

 if(s.IsEmpty())
    cout<< "\nStack is empty";
   else
    cout<<"\nStack is not empty";


 if(s.IsFull())
    cout<< "\nStack is FULL";
   else
    cout<<"\nStack is not FULL";
cout<<"\n";


while(!s1.IsEmpty())
{
    int temp = s1.Top();
    cout<<temp<<" ";
    s.Push(temp);
    s1.Pop();
}

s.Push(3);

cout<<"\nAFTER PUSING AHOTHER ITEM: ";

 while(!s.IsEmpty())
 {
     int top;
     top = s.Top();
     s1.Push(top);
     s.Pop();
 }
 cout<<"\n";

while(!s1.IsEmpty())
{
    int temp = s1.Top();
    cout<<temp<<" ";
    s.Push(temp);
    s1.Pop();
}

if(s.IsFull())
    cout<< "\nStack is FULL";
   else
    cout<<"\nStack is not Fcin>>st;ULL";
cout<<"\n";

s.Pop();
s.Pop();
cout<<"AFTER POP TWO ITEM AND TOP ITEM: "<<s.Top();


StackType<int> s3;

s3.Push(4);
s3.Push(3);
s3.Push(1);
s3.Push(2);
s3.Push(5);
int a=  SumOdd(s3);
cout<<"\n";
cout<<"SUM: "<<a;


string expr = "()";

    if (areParanthesisBalanced(expr))
        cout << "\nBalanced";
    else
        cout << "\nNot Balanced";


        string expr1 = "(())()(()())()";

    if (areParanthesisBalanced(expr1))
        cout << "\nBalanced";
    else
        cout << "\nNot Balanced";



        string expr2 = "(())()((()";

    if (areParanthesisBalanced(expr2))
        cout << "\nBalanced";
    else
        cout << "\nNot Balanced";


        string expr3 = "(())))((()";

    if (areParanthesisBalanced(expr3))
        cout << "\nBalanced";
    else
        cout << "\nNot Balanced";


}










