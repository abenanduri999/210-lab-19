//COMSC 210 | Lab 19 | Abhishek Nanduri

#include<iostream>
#include<vector>
#include<string>
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
        void setTitle(string t) {title = t;}
        string getTitle() const {return title;}

};

int main() {

    Movie m1, m2, m3, m4;
    m1.setTitle("");
    m2.setTitle("");
    m3.setTitle("");
    m4.setTitle("");
    ifstream input; 
    input.open("input.txt"); 
    const int SIZE = 4; 

}

