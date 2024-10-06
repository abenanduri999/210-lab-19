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
        
        void display();
        int addToHead(int);
        void setTitle(string t) {title = t;}
        string getTitle() const {return title;}

};

int main() {

    Movie m1, m2, m3, m4;
    vector<Movie> movies; 

   /* vector<string> review; 
    ifstream input;
    input.open("input.txt"); 
    string rev; 
    while(!input.eof()) 
    {
        getline(input, rev);
        review.push_back(rev);
    } */



    m1.setTitle("Oppenheimer");
    m2.setTitle("Heart of Stone");
    m3.setTitle("Fast and Furious");
    m4.setTitle("Faster than the Speed of Love");
    movies.push_back(m1);
    movies.push_back(m2);
    movies.push_back(m3);
    movies.push_back(m4); 

    int count = 0; 
    for(int i = 0; i < movies.size(); i++)
    {       
        cout<<endl;
        cout<<movies[i].getTitle()<<endl;
        count = movies[i].addToHead(count);   
        movies[i].display(); 
        cout<<endl; 
    }

    return 0; 
}


void Movie::display() 
{
 

    Node * current; 
    current = head; 
    int count = 0;
    
    while(current != nullptr) 
    {    
        
        cout<<"\tReview #"<<count + 1<<": "<<current->data<<": "<<current->review<<endl; 
        current = current->next; 
        count++;
        
    }  
 
} 

int Movie::addToHead(int j)
{
    vector<string> review; 
    ifstream input;
    input.open("input.txt"); 
    string rev; 
    while(!input.eof()) 
    {
        getline(input, rev);
        review.push_back(rev);
    }

    for(int i = 0; i< SIZE; i++ ) {
    Node * newNode = new Node; 
    double num = rand() % 5;

    if(!head) 
    {
        head = newNode; 
        newNode->next = nullptr; 
        newNode->data = num; 
        newNode->review = review[j++]; 
    }
    else 
    {
        newNode->next = head; 
        newNode->data = num;
        newNode->review = review[j++];
        head = newNode; 
    }
    }

    return j; 
}

