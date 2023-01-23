#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    Node(int d){
        data=d;
        next=NULL;
    }
};
Node *head;
class Stack{
public:
    void push(int data);
    void pop();
    int top();
    bool isEmpty();
};
void Stack::push(int data) {
    if(head==NULL){
        head = new Node(data);
        return;
    } else{
        Node *newNode= new Node(data);
        newNode->next=head;
        head=newNode;
        return;
    }
}
int Stack::top() {
    Node *curr=head;
    if(head==NULL){
        cout<<"No element in the Stack"<<endl;
        return 0;
    }
    return curr->data;
}
void Stack::pop() {
    if(head==NULL){
        return;
    }
    else{
        Node *deleteNode = head;
        head=head->next;
        free(deleteNode);
    }
}
bool Stack::isEmpty() {
    if(head==NULL){
        return true;
    }
    else{
        return false;
    }
}

bool ParenthesisParsing(string s)
{


    Stack st;
    bool ans= true;
    for(int i=0; i<s.length(); i++)
    {



        if(s[i]=='[' || s[i]=='{' || s[i]=='(')
        {
            st.push(s[i]);
        }
        else if(s[i]==']')
        {
            if(!st.isEmpty() && st.top()=='[')
            {
                st.pop();
            }
            else
            {

                ans= false;
                break;
            }
        }
        else if(s[i]=='}')
        {
            if(!st.isEmpty() && st.top()=='{')
            {
                st.pop();
            }
            else
            {

                ans= false;
                break;
            }
        }
        else if(s[i]==')')
        {
            if(!st.isEmpty() && st.top()=='(')
            {
                st.pop();
            }
            else
            {

                ans= false;
                break;
            }
        }

    }
    if(ans==false)
    {
        while(!st.isEmpty())
            st.pop();
    }

    if(!st.isEmpty())
    {

        return false;
    }
    return ans;
}

int main()
{
    string line;
    ifstream file("Name.txt");
    while(getline(file,line))
    {
        cout<<line<<endl;
    }
    file.close();
    cout<<"-------------------------------------"<<endl;
    cout<<"For Checking the expressions (TAP):1"<<endl;
    cout<<"For close the program (TAP):2"<<endl;
    cout<<"-------------------------------------"<<endl;
    int data;
    cin>>data;

    switch (data)
    {
        case 1:
        {
            cout<<"The equations are:"<<endl;
            string line1;
            ifstream  file1("Equations.txt");
            while (getline(file1,line1))
            {
                cout<<line1<<endl;
            }
            file1.close();
            cout<<"--------------------------------------------------"<<endl;
            cout<<"To check the equation whether it's valid or not (Tap: 1)"<<endl;
            cout<<"For Close the program (TAP):2"<<endl;
            cout<<"--------------------------------------------------"<<endl;
            cin>>data;
            switch (data)
            {
                case 1:
                {
                    int i=1;
                    string line;

                    ifstream file("Equations.txt");

                    while(getline(file,line))
                    {

                        cout<< line <<endl;

                        bool checker= ParenthesisParsing(line);
                        if(checker == true)
                        {
                            cout<<"Valid equation "<<"in line Number:"<<i++<<endl;
                        }
                        else if(checker == false)
                        {
                            cout<<"an error occurred in line number:"<<i++<<endl;
                        }


                    }
                    file.close();
                    cout<<"----------------------------------------------------"<<endl;



                    break;

                }
                case 2:
                {
                    cout<<"The Program closed successfully"<<endl;
                    exit(0);
                }
            }
            break;


        }
        case 2:
        {
            cout<<"Program closed successfully"<<endl;
            exit(0);
        }

    }
    }



