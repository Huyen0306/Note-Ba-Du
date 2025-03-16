// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ifstream file ("../csv.csv");
//     if (!file) {
//         cout<<"File not found!"<<endl;
//         return 0;
//     }

//     cout<<"<?xml version=1 encoding=UTF-8?>"<<endl;
//     string line;
//     while (getline(file, line)) { 
//         cout << line << endl;
//         stringstream ss(line);
//         string firstName, lastName, score;
        
//         getline(ss, firstName, '|');
//         getline(ss, lastName, '|'); 
//         getline(ss, score);         

//         cout<<"<Student>"<<endl;
//         cout<<"   <LastName>"<<lastName<<"</LastName>"<<endl;
//         cout<<"   <FirstName>"<<firstName<<"</FirstName>"<<endl;
//         cout<<"   <LastName>"<<score<<"</LastName>"<<endl;
//         cout<<"</Student>"<<endl;
//     }

//     file.close();
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    // ifstream file("CSV.CSV"); // Mở file
    // if (!file) {
    //     cerr << "File not found!" << endl;
    //     return 1;
    // }

    cout << "<?xml version=1 encoding=UTF-8?>\n"; // Tiêu đề XML

    string line;
    while (getline(cin, line)) { // Đọc từng dòng
        stringstream ss(line);
        string lastName, firstName, markStr;
        
        getline(ss, lastName, '|');  // Họ và tên đệm
        getline(ss, firstName, '|'); // Tên
        getline(ss, markStr);        // Điểm
        
        double mark = stod(markStr); // Chuyển điểm từ string sang số
        if (mark >= 5.0) { // Lọc điểm >= 5.0
            cout << "<Student>\n";
            cout << "   <LastName> " << lastName << " </LastName>\n";
            cout << "   <FirstName> " << firstName << " </FirstName>\n";
            cout << "   <Mark> " << fixed << setprecision(2) << mark << " </Mark>\n";
            cout << "</Student>\n";
        }
    }

    // file.close();
    return 0;
}
