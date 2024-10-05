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
    
    public: 
        Node * newNode = nullptr;
        void setTitle(string t) {title = t;}
        void setNode(Node * head, double value, string rev) {head->data = value, head->review = rev;}
        string getTitle() const {return title;}
        //double getNode() const {}
};

int main() {

    ifstream input; 
    input.open("input.txt"); 
    


}
