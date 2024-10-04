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
    int userMode; // to hold the user's choice of head or tail mode for node addition
    double rating; // to hold the movie rating
    string comment; // to hold the comment about the movie
    
    return 0;
}

// addNodeToHead(MovieReviewNode *& head, double rating, string comment) function header
// DESCRIPTION: this function will create a new node, set the value of the new node, and add this new node to the front (head) of the list
// ARGUMENTS: MovieReviewNode *& head, which is a pointer to the head of the list
// - double rating, which represents the movie rating being added
// - string comment, which represents the movie comment being added
// Passing by reference because the linked list will be modified and this modification will also reflect in main()
// RETURNS: nothing, void function. Purpose is to just create a node with values and add it to the head of the list
void addNodeToHead(MovieReviewNode *& head, double rating, string comment)
{
    MovieReviewNode *newNode = new MovieReviewNode; // create a new node
    newNode->movieRating = rating; // set movie rating of new node
    newNode->movieComment = comment; // set movie comment of new node

    if (!head) // if linked list is empty
    {
        head = newNode; // make newNode the head
        newNode->next = nullptr; // next node after newNode should be set to nullptr
    }
    else // if linked list is NOT empty
    {
        newNode->next = head; // next will now point to list's 1st node
        head = newNode; // head points to newNode
    }
}

// addNodeToTail(MovieReviewNode *& head, double rating, string comment) function header
// DESCRIPTION:
// ARGUMENTS:
// Passing by reference because the linked list will be modified and this modification will also reflect in main()
// RETURNS:
void addNodeToTail(MovieReviewNode *& head, double rating, string comment)
{
    MovieReviewNode *newNode = new MovieReviewNode; // create a new node
    newNode->movieRating = rating; // set movie rating of new node
    newNode->movieComment = comment; // set movie comment of new node
    newNode->next = nullptr; // set next pointer to nullptr

    if (!head) // if linked list is empty
    {
        head = newNode; // make newNode the head
    }
    else // if linked list is NOT empty
    {
        MovieReviewNode *current = head; // current points to head

        while (current->next) // loop to traverse list to the end
        {
            current = current->next; // current points to next node in the list
        }

        current->next = newNode; // last node is now set to newNode
    }
}