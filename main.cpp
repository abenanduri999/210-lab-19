//COMSC 210 | Lab 19 | Abhishek Nanduri

#include<iostream>
#include<vector>

using namespace std; 

class Movie 
{
    private: 
        string title;
        struct Node 
        {
            double data; 
            string review; 
        }; 
    
    public: 
        void setTitle(string t) {title = t;}
        void setNode(Node * head, double val, string rev) {head->data = val, head->review = rev;}
        string getTitle() {return title;}
        double getData() {return data;}
};

int main() {



}
