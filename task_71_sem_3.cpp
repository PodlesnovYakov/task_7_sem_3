#include <iostream>
#include <map>
#include <string>
#include <locale.h>
#include <Windows.h>
#include <vector>
#include <list>
#include <set>
using namespace std;


int main()
{

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    map <string, set <string>> le;
    int n,j;
    string eng_word, just_word, lat_word;
    vector<string> lat_words;
    cin >> n;
    getline(cin, just_word);
    for (int i = 0; i < n; i++) {
        getline(cin, just_word);
        j = just_word.find("-");
        eng_word = just_word.substr(0, j - 1);
        just_word.erase(0, j + 2);
        j = just_word.find(",");
        while (j != string::npos) {
            lat_word = just_word.substr(0, j);
            lat_words.push_back(lat_word);
            just_word.erase(0, j + 2);
            j = just_word.find(",");
        }
        if (!just_word.empty()) lat_words.push_back(just_word);
        for (int i = 0; i < lat_words.size(); i++) {
            le[lat_words[i]].insert(eng_word);
        }

        lat_words.clear();
    }
    cout << le.size() << endl;
    for (auto iter = le.begin();iter != le.end();iter++)
    {
        string str_per = ""; 
        for (auto it = (*iter).second.begin(); it != (*iter).second.end();it++) {
            if (!str_per.empty()) {
                str_per += ", " + (*it);
            }
            else {
                str_per += (*it);
            }
        }
         
        cout << ((*iter).first +" - "+ str_per + '\n'); 
    }
    
   
}

