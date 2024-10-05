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
        
        void setTitle(string t) {title = t;}
        string getTitle() const {return title;}

};

int main() {

    ifstream input; 
    input.open("input.txt"); 
    const int SIZE = 4; 

}
