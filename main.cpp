//COMSC 210 | Lab 19 | Abhishek Nanduri

#include<iostream>
#include<vector>
#include<fstream>

using namespace std; 

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
                Node * newNode; 
                Node * current; 

                newNode = new Node; 
                newNode->data = num;
                newNode->next = nullptr; 


            } 
        void setTitle(string t) {title = t;}
        string getTitle() const {return title;}

};

int main() {

    ifstream input; 
    input.open("input.txt"); 
    const int SIZE = 4; 

}

