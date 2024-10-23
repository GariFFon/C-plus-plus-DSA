////Imagine you are working on a text processing system for a search engine. As part of the system, you need to implement a pattern-matching algorithm using a sliding window approach.
////
////
////
////Given a large text document and a pattern, you are required to find all occurrences of the pattern in the text document efficiently.
////
////
////
////Your task is to write a program that performs the following operations:
////
////Read the large text document and store it in memory.
////Read the pattern from the user.
////Implement a sliding window algorithm using a linked list-based deque to find all occurrences of the pattern in the text document.
////Display the positions (starting indices) of all occurrences of the pattern in the text document.
////
////
////Write a program to implement the above operations and display the positions of all occurrences of the pattern in the text document.
////
////
////
////Company Tags: TCS
////
////Input format :
////The first line of input consists of a sequence of strings.
////
////The second line consists of the pattern to be found in the given string.
////
////Output format :
////If the pattern is found in the string, print the index or indexes where the pattern occurs (index starts from 0)
////
////If the pattern is not found, print "Pattern not found".
////
////If the pattern is longer than the string, print "Pattern is longer than the string".
////
////
////
////Refer to the sample output for the exact text and format.
////
////Code constraints :
////The strings are case-sensitive.
////
////Sample test cases :
////Input 1 :
////abcdabcdeabcdabcdeabcdabcde
////abcd
////Output 1 :
////Pattern found at index 0
////Pattern found at index 4
////Pattern found at index 9
////Pattern found at index 13
////Pattern found at index 18
////Pattern found at index 22
////Input 2 :
////abcdefghij
////abcdefghijkl
////Output 2 :
////Pattern is longer than the string
////Input 3 :
////Harry Potter
////harry
////Output 3 :
////Pattern not found
//
////ANSWER
//
//#include <iostream>
//#include <deque>
//#include <queue>
//#include <string>
//using namespace std;
//
//void Display(deque<char> Q)
//{
//    while(!Q.empty())
//    {
//        cout<<Q.front();
//        Q.pop_front();
//    }
//    cout<<endl;
//}
//
//bool Match(deque<char> Q, deque<char> Q2)
//{
//    deque<char> temp = Q;
//    deque<char> temp2 = Q2;
//    while(!temp.empty() && !temp2.empty())
//    {
//        if(temp.front() != temp2.front())
//        {
//            return false;
//        }
//        temp.pop_front();
//        temp2.pop_front();
//    }
//    return true;
//}
//void PatternSearch(deque<char> Q,deque<char> Q2)
//{
//    deque<char> temp = Q;
//    int sizeofstr= temp.size();
//    deque<char> temp2 = Q2;
//    int sizeofptrn = temp2.size();
//    
//    if(sizeofstr<sizeofptrn)
//    {
//        cout<<"Pattern is longer than the string"<<endl;
//        return;
//    }
//    
//    deque<char> emptyQ;
//    int count =0;
//    bool found = false;
//    while(!temp.empty() && count<=sizeofstr - sizeofptrn)
//    {
//        emptyQ.clear();
//        
//        for(int i=0;i<sizeofptrn && temp.size();i++)
//        {
//            emptyQ.push_back(temp[i]);
//        }
//        if(Match(temp2,emptyQ))
//        {
//            cout<<"Pattern found at index "<<count<<endl;
//            found = true;
//        }
//        
//        temp.pop_front();
//        count++;
//    }
//    if(!found)
//    {
//        cout<<"Pattern not found"<<endl;
//    }
//}
//int main()
//{
//    deque<char> Q;
//    deque<char> Q2;
//    string str;
//    getline(cin,str);
//    string ptrn;
//    getline(cin,ptrn);
//    
//    int size=str.length();
//    for(int i=0;i<size;i++)
//    {
//        Q.push_back(str[i]);
//    }
//    
//    int sizeofptrn = ptrn.length();
//    for(int j=0;j<sizeofptrn;j++)
//    {
//        Q2.push_back(ptrn[j]);
//    }
//
//    PatternSearch(Q,Q2);
//    
//    return 0;
//}
