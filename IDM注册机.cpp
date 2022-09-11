#include <iostream>
#include <Windows.h>

using namespace std;

#pragma warning(disable:4996)

// "2YOPB3AQCVUXMNRS97WE0IZD4KLFGHJ8165T"
const char kEnCode36[] = { 0x32, 0x59, 0x4F, 0x50, 0x42, 0x33, 0x41, 0x51, 0x43, 0x56, 0x55, 0x58, 0x4D, 0x4E, 0x52, 0x53,0x39, 0x37, 0x57, 0x45, 0x30, 0x49, 0x5A, 0x44, 0x34, 0x4B, 0x4C, 0x46, 0x47, 0x48, 0x4A, 0x38,0x31, 0x36, 0x35, 0x54 };

int SnGenerate(unsigned int base,char* serial_number,int  serial_size)
{
    if (serial_size <= 5)  return 0;

    for (int i = 0; i < 5; i++) {
        for (int encode36_count = 0; encode36_count <= 35; encode36_count++) {
            if ((base - encode36_count) % 37 == 0) {
                base = (base - encode36_count) / 37;
                serial_number[i] = kEnCode36[encode36_count];
                break;
            }

            if (encode36_count == 35) return 0;
        }

    }
    return 1;    
}

//  USTWQ-3I9R6-BBIGL-M8LE8
int main()
{
    unsigned int base = 454651;
    unsigned int number1 = 43 * base;
    unsigned int number2 = 23 * base;
    unsigned int number3 = 17 * base;
    unsigned int number4 = 53 * base;

    char register_sn_0_5[6] = {0};
    char register_sn_6_11[6] = {0};
    char register_sn_13_17[6] = {0};
    char register_sn_18_23[6] = {0};

    SnGenerate(number1,register_sn_0_5,6);
    SnGenerate(number2,register_sn_6_11,6);
    SnGenerate(number3,register_sn_13_17,6);
    SnGenerate(number4,register_sn_18_23,6);

    printf("Serial Number: %s-%s-%s-%s \r\n",strrev(register_sn_0_5),strrev(register_sn_6_11),
           strrev(register_sn_13_17),strrev(register_sn_18_23));
}
