// COMSC-210 | Lab 18 | Mira Anand
// Module 6, Lesson: Linked Lists, Assignment: Movie Reviews
// IDE used: Visual Studio Code for Mac

#include <iostream>
#include <string>
using namespace std;

// creation of a struct named "MovieReviewNode"
// each node will store a complete movie review by a reviewer
struct MovieReviewNode
{
    double movieRating; // to store a movie rating
    string movieComment; // to store a comment about the movie
    MovieReviewNode *next; // points to the next node
};

// function prototypes
void addNodeToHead(MovieReviewNode *&, double, string);
void addNodeToTail(MovieReviewNode *&, double, string);
void output(MovieReviewNode *);

int main()
{
    MovieReviewNode *head = nullptr; // define a pointer for the head of the list and initialize it to nullptr to indicate an empty list

    // declaration of variables section
    
    return 0;
}