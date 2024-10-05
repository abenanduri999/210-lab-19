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
    vector<Movie> movies; 

    m1.setTitle("Oppenheimer");
    m2.setTitle("Heart of Stone");
    m3.setTitle("Fast and Furious");
    m4.setTitle("Faster than the Speed of Love");
    movies.push_back(m1);
    movies.push_back(m2);
    movies.push_back(m3);
    movies.push_back(m4); 

    for(int i = 0; i < movies.size(); i++)
    {
        cout<<movies[i].getTitle()<<endl;
        movies[i].addToHead(); 
        cout<<endl; 
    }
    //cout<<m1.getTitle()<<endl; 
    //m1.addToHead(); 
    //cout<<endl; 
   

}

void Movie:: addToHead()
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
        streampos pos = input.tellg(); 
        input.seekg(pos); 
        getline(input, r1);    
        newNode->review = r1; 
        
    } 
    
    input.close(); 
    

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
    display();
    }

     
}

void Movie::display() 
{
    Node * current; 
    current = head; 
    int count = 0; 

    while(current->next != nullptr) 
    {
        cout<<"\tReview: "<<current->data<<": "<<current->review<<endl; 
        current = current->next; 
    }       
} 