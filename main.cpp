//COMSC 210 | Lab 19 | Abhishek Nanduri

#include<iostream>
#include<vector>
#include<string>
#include<fstream>

using namespace std; 

const int SIZE = 3; 

class Movie 
{
    private: 
        string title;
        struct Node 
        {
            double data; 
            string review; 
            Node * next;
        }; 

        Node * head; 
    
    public: 
        
        Movie() {head = nullptr;}
        void addToHead(double num) 
            {
               

            } 
        void setTitle(string t) {title = t;}
        string getTitle() const {return title;}

};

int main() {

    Movie m1, m2, m3, m4;
    m1.setTitle("Oppenheimer");
    m2.setTitle("Heart of Stone");
    m3.setTitle("Fast and Furious");
    m4.setTitle("Faster than the Speed of Love");

    ifstream input; 
    input.open("input.txt"); 
    const int SIZE = 4; 

}

void Movie::addToHead(double num)
{
    Node * newNode; 
    newNode = new Node;

    if(!head)
        {
        
        head = newNode; 
        newNode->data = num;
        newNode->next = nullptr; 
        
        }
        
    else
    {
        newNode->next = head; 
        newNode->data = num;
        head = newNode; 
    }

}