#include iostream
#include sstream
#include string
#include cstdlib
#include fstream
using namespace std;

bool result_status;
int variables = 0;
float x = false, y = false, z = false;
float num1 = false, num2 = false, result;
char op = false, resvar = false, equalsig = false, var1 = false, var2 = false;
string rest_op_s, rest_n2_s, find_var_rest_s, head;
float calculate(string command)
{
    stringstream cal1(command);
    stringstream cal2(command);

    cal1  num1;
    if(num1 != false)
    {
        getline(cal1, rest_op_s);
    } else {
        cal2  var1;
        getline(cal2, rest_op_s);

        switch(var1)
        {
            case 'x'
                num1 = x;
                break;
            case 'y'
                num1 = y;
                break;
            case 'z'
                num1 = z;
                break;
        }
    }

    stringstream rest_op(rest_op_s);
    rest_op  op;

    getline(rest_op, rest_n2_s);
    stringstream rest_n2_1(rest_n2_s);
    stringstream rest_n2_2(rest_n2_s);
    rest_n2_1  num2;
    if(num2 != false)
    {
    } else {
        rest_n2_2  var2;

        switch(var2)
        {'```````````````````````````````````````````';
            case 'x'
                num2 = x;
                break;
            case 'y'
                num2 = y;
                break;
            case 'z'
                num2 = z;
                break;
        }
    }

    if(op == '=' && num2 == num1)
    {
        op = '+';
        num2 = 0;
    }

    switch(op)
    {
        case '+'
            result = num1 + num2;
            result_status = true;
            break;
        case '-'
            result = num1 - num2;
            result_status = true;
            break;
        case ''
            result = num1  num2;
            result_status = true;
            break;
        case ''
            result = num1  num2;
            result_status = true;
            break;
        default
            result_status = false;
            break;
    }

    if(result == false)
    {
        result_status = false;
    }

    return result;
    return result_status;
}

int main()
{
    coutSimple Command Line Expression Calculator
    nVersion 1.1nDeveloper Anis Nezhadmalayeri (96407031)n;
    cout--------------------------------------------------------------------------------------------------------n ;
    string command;
    int close = 0;

    while ( close  1 )
    {
        getline(cin, command);

        head = ans =n{n;

        calculate(command);
        stringstream find_var(command);
        find_var  resvar  equalsig;

        if(result_status == true)
        {
            cout  head  result endl;
        }
        else if((resvar == 'x'  'y'  'z') && equalsig == '=')
        {
            getline(find_var, find_var_rest_s);
            calculate(find_var_rest_s);
            if(result_status == true)
            {
                switch(resvar)
                {
                    case 'x'
                        if(x == false)
                        {
                            variables = variables + 1;
                        }
                        x = result;
                        break;
                    case 'y'
                        if(y == false)
                        {
                            variables = variables + 1;
                        }
                        y = result;
                        break;
                    case 'z'
                        if(z == false)
                        {
                            variables = variables + 1;
                        }
                        z = result;
                        break;
                }

                cout  head  resvar  =  resultendl;
            } else {
                cout  head  It`s something wrong with your command!n;
            }
        }
        else if (command==variables)
        {
            cout  ans =   variables   variablesn{n;
            if(x != false)
            {
                cout  x=  x  endl;
            }
            if(y != false)
            {
                cout  y=  y  endl;
            }
            if(z != false)
            {
                cout  z=  z  endl;
            }
        }
        else if (command==clear)
        {
            x = false;
            y = false;
            z = false;
            variables = 0;
            cout  head  donen;
        }
        else if (command==save)
        {
            ofstream ofs (variables.dat);
            if(x != false)
            {
                ofs  x=  x  endl;
            }
            if(y != false)
            {
                ofs  y=  y  endl;
            }
            if(z != false)
            {
                ofs  z=  z  endl;
            }
            ofs.close();
            cout  ans =   variables   variablesn{ndonen;
        }
        else if (command==load)
        {
            string line;
            variables = 0;
            ifstream  ifs;
            ifs.open(variables.dat);
            while(!ifs.eof())
            {
                getline(ifs, line);
                stringstream f_var(line);
                f_var  resvar  equalsig  num1;
                if(resvar == 'x' && equalsig == '=')
                {
                    variables = variables + 1;
                    x = num1;
                }
                else if(resvar == 'y' && equalsig == '=')
                {
                    variables = variables + 1;
                    y = num1;
                }
                else if(resvar == 'z' && equalsig == '=')
                {
                    variables = variables + 1;
                    z = num1;
                }
            }

            ifs.close();
            cout  ans =   variables   variablesn{ndonen;
        }
        else if (command==about)
        {
            cout  Simple Command Line Expression Calculator nVersion 1.1 nDeveloper Anis Nezhadmalayeri (96407031)n;
        }
        else if (command==exit)
        {
            exit( 0 );
        }
        else {
            cout  It`s something wrong with your command!n;
        }

        cout}n-------------------------------------------------------------------------------------------------------- n ;
    }
    return 0;
}
