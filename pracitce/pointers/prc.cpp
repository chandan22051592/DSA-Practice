// #include <iostream>
// #include <string>
// using namespace std;

// int main(){

//     string str;
//     // cout << "Enter a string with backslashes: ";
//     // getline(cin, str);
//     str = "1H|\\^&|||YP8K|||||||P|LIS2-A2|20220406163859";
//     const unsigned char CR = static_cast<const unsigned char>(0x0D);
//     const unsigned char ETX = static_cast<const unsigned char>(0x03);
//     str.push_back(CR);
//     str.push_back(ETX);
//     cout<<str<<"wghfs"<<endl;
//     //unsigned char n = getASCIIsum(str);
//     // cout<<getChecksum(3355);
//     return 0;

// }

#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;
    // string text = "1H|\^&|||YP8K|||||||P|LIS2-A2|20220406163859";
    getline(cin, text);

    const unsigned char CR = static_cast<const unsigned char>(0x0D);
    const unsigned char ETX = static_cast<const unsigned char>(0x03);
    text.push_back(CR);
    text.push_back(ETX);

    cout << text << endl;

    // int ascii_sum =  accumulate(text.begin(), text.end(), 0, [](int sum, char c) {
    //     return sum + static_cast<int>(c);
    // });

    int ascii_sum = 0;
    for (char c : text)
    {
        ascii_sum += static_cast<int>(c);
    }

    cout << "Sum of ASCII values: " << ascii_sum % 256 << endl;
    return 0;
}
