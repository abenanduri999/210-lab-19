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
        void addToHead(); 
        void display(); 
        void setTitle(string t) {title = t;}
        string getTitle() const {return title;}

};

int main() {

    Movie m1, m2, m3, m4;
    
    m1.setTitle("Oppenheimer");
    m2.setTitle("Heart of Stone");
    m3.setTitle("Fast and Furious");
    m4.setTitle("Faster than the Speed of Love");

     

   

}

void Movie::addToHead()
{
    for(int i = 0; i < SIZE; i++) 
    {
    Node * newNode; 
    newNode = new Node;
    double num = rand() % 5; 

    ifstream input; 
    input.open("input.txt"); 
    string r1; 
    if(input.is_open()) 
    {
        while(getline(input, r1))
        {
            newNode->review = r1; 
        }
    } 
    

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
}

void Movie::display() 
{
    
} 