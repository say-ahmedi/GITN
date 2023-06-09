#include "iostream"
#include "fstream"
#include "string"

using namespace std;

class Sign
{
public:

    int Sign_up()
    {
        string sign = "sign.txt";
        fstream vxod;
        vxod.open(sign, fstream::in | fstream::out | fstream::app);

        if (!vxod.is_open())
        {
            cout << "Error!" << endl;
        }
        else
        {
            string login_cheker, password_cheker;
            cout << "Enter your login "; cin >> login_cheker;
            cout << endl;
            cout << "Enter you password "; cin >> password_cheker;

            vxod << login_cheker;
            vxod << password_cheker;
            cout << "Registration was successful!" << endl;
            return 0;
        }
    }
    int Sign_in()
    {
        string sign = "sign.txt";
        fstream vxod;
        vxod.open(sign, fstream::in | fstream::out | fstream::app);

        if (!vxod.is_open())
        {
            cout << "Error!" << endl;
        }
        else
        {
            string login_cheker;
            string password_cheker;

            while (!vxod.eof())
            {
                login_cheker = "";
                vxod >> login_cheker;
            }
            while (!vxod.eof())
            {
                password_cheker = "";
                vxod >> password_cheker;
            }

            string login_correct, password_correct;
            cout << "Enter your loogin "; cin >> login_correct;
            cout << endl;
            cout << "Enter you password "; cin >> password_correct;

            if (login_correct != login_cheker && password_correct != password_cheker)
            {
                cout << "The password or login is entered incorrectly!" << endl;
            }
            else
            {
                cout << "The password or login is entered correctly!" << endl;
            }
            return 0;
        }

    }
};

int main()
{
    int number;
    cout << "Sign up (1)" << endl << "Sign in (2)" << endl;
    cin >> number;

    if (number != 1 && number != 2) cout << "Error";

    if (number == 1) {
        system("cls");
        Sign pass;
        pass.Sign_up();
    }

    if (number == 2) {
        system("cls");
        Sign pass;
        pass.Sign_in();
    }
    return 0;

}