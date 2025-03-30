#include<iostream>
#include<fstream>
using namespace std;
int count_sentences(ifstream& file)
{
    int sentence_count = 0;
    char ch;
    while (file >> ch)
    {
        if (ch == '.')
        {
            sentence_count++;
        }
    }
    return sentence_count;
}
int main()
{
    char filename[20] = { "Pakistan.txt" };
    char dot[100];
    ifstream read;
    fstream write;
    read.open(filename);   
    write.open(filename);
    bool Not_first = false;

    while (read.getline(dot, 100))
    {
        if (Not_first)
        {
            write << endl;
        }
        write << dot << ".";
        Not_first = true;
    }

    read.close();
    write.close();
    ifstream updated(filename);
    int total_sentences = count_sentences(updated);
    cout << "Total sentences: " << total_sentences << endl;
    updated.close();
    return 0;
}
