#include <bits/stdc++.h>

using namespace std;

// Complete the hackerrankInString function below.
string hackerrankInString(string s) {
int k=0,len=s.length();
string str="hackerrank";
for(int i=0;i<len;i++){
    if(s[i]==str[k]){
        k++;
    }
}
string res="NO";
if(k==10){
    res="YES";
    cout<<res;
}
else{
    cout<<res;
}
return res;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int q;
    cin >> q;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int q_itr = 0; q_itr < q; q_itr++) {
        string s;
        getline(cin, s);

        string result = hackerrankInString(s);

        fout << result << "\n";
    }

    fout.close();

    return 0;
}
