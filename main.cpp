/*
// 1)-29 pages

#include <iostream>
using namespace std;

int main()
{
    cout << "Enjoy youself with C++!" << endl;
    return 0;
}
*/

/*
// 2)-31 pages

#include <iostream>
using namespace std;

void line(), message(); // Prototypes

int main()
{
    cout << "Hello! The program starts in main()." << endl;
    line();
    message();
    line();
    cout << "At the end of main()." << endl;

    return 0;
}

void line() // To draw a line with
{
    cout << "---------------------------------" << endl;
}

void message() // To display a message
{
    cout <<  "In function message()." << endl;
}
*/

/*
// 3)-33 pages
#include <iostream>
using namespace std;

void pause(); //Prototypes

int main()
{
    cout << endl << "Dear reader, "
         << endl << "have a ";
    pause();
    cout << "!" << endl;

    return 0;
}

void pause()
{
    cout << "BREAK";
}
*/

/*
// 4)-34 pages
#include <iostream>
using namespace std;

int main()
{
    cout << "Oh what" << endl;
    cout << "a happy day!" << endl;
    cout << "Oh yes," << endl;
    cout << "what a happy day!" << endl;
}
*/

/* Now you should not forget your glasses */

/*
#include <iostream>
using namespace std;

int main()
{
    std::cout << "Size of :" 
    << sizeof(bool) << " "
    << sizeof(char)  << " "
    << sizeof(wchar_t)  << " "
    << sizeof(short) << " "
    << sizeof(int) << " "
    << sizeof(long) << " "
    << sizeof(float)  << " "
    << sizeof(double)  << " "
    << std::endl;

    return 0;
}
*/

/*
// 38-pages
#include <iostream>
#include <climits> // Definition of INT_MIN, ...,
using namespace std;

int main()
{
    cout << "Range of types int and unsigned int "
         << endl << endl;
    cout << "Type               Minimum                 Maximum"
         << endl
         << "--------------------------------------------------"
         << endl;

    cout << "int                " << INT_MIN << "               "
                                  << INT_MAX << endl;

    cout << "unsigned int       " << "          0           "
                                  << UINT_MAX << endl;

    return 0;
}
*/

// To display hexdecimal integer literals and
// decimal integer literals with
//
#include <iostream>
using namespace std;

int main()
{
    // cout outputs integers as decimal integers:
    cout << "Value of 0xFF = " << 0xFF << " decimal"
         << endl;   // Output : 255 decimal

    // The mainpulator hex changes output to hexadecimal
    // format (dec changes to decimal format) :
    cout << "Value of 27 = " << hex << 27 << " hexadecimal"
         << endl; // Output : 1b hexadecimal
    // 0x1B
    return 0;
}