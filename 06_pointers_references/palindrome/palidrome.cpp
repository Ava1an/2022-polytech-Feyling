#include <cassert>
#include <iostream>


using namespace std;


unsigned int length(const char* str)
{
    if (str == nullptr)
    {
        return 0;
    }
    else
    {
        int size = 0;
        while (*str++)
        {
            size++;
        }
        return size;
    }
}


bool test(const char* str)
{
    if (str == nullptr)
    {
        return false;
    }
    else
    {
        int a = length(str);
        for (int i = 0; i < (a / 2); i++)
        {
            if (str[i] != str[a - i - 1]) return false;
        }
        return true;
    }
}


int main()
{
    assert(test("a") == true);
    assert(test("ab") == false);
    assert(test("") == true);
    assert(test("aboba") == true);
    assert(test("abobaboba") == true);
    assert(test("1234567890987654321") == true);
    assert(test("�����") == true);
    assert(test(nullptr) == false);
    assert(test("�����") == true);
    assert(test("������") == true);
    assert(test("��������������") == true);
    return 0;
}