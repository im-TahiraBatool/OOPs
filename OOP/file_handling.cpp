#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // Create an object of ofstream
    ofstream outfile;
    // Open a file called "example.txt" in write mode
    outfile.open("example.txt");
    // Write data to the file
    outfile << "This is some text written to a file.\n";
    // Close the file
    outfile.close();

    // Create an object of ifstream
    ifstream infile;
    // Open the same file in read mode
    infile.open("example.txt");
    // Read data from the file
    string data;
    getline(infile, data);
    // Print the data to the console
    cout << data << endl;
    // Close the file
    infile.close();

    // Create an object of fstream
    fstream file;
    // Open the same file in read and write mode
    file.open("example.txt", ios::in | ios::out);
    // Move the file pointer to the end of the file
    file.seekp(0, ios::end);
    // Write some more data to the file
    file << "This is some more text written to the file.\n";
    // Move the file pointer to the beginning of the file
    file.seekg(0, ios::beg);
    // Read all the data from the file
    string line;
    while (getline(file, line)) {
        cout << line << endl;
    }
    // Close the file
    file.close();

    return 0;
}

