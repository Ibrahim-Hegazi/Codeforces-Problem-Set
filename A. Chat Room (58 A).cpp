#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;
    bool hf = false, ef = false, l1f = false, l2f = false,of=false;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'h') {
            hf = true;
        }
        
        else if (s[i] == 'e' && hf == true) {
            ef = true;
        }

        else if (s[i] == 'l' && hf == true && ef==true && l1f==false) {
            l1f = true;
        }

        else if (s[i] == 'l' && hf == true && ef == true && l1f==true && l2f==false) {
            l2f = true;
        }
        
        else if (s[i] == 'o' && hf == true && ef == true && l1f == true && l2f == true) {
            of = true;
        }
    }

    if (hf == true && ef == true && l1f == true && l2f == true && of == true)
        cout << "YES";
    else
        cout<<"NO";
    return 0;
}

