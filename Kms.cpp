// Coding : gbk (Simplfiled Chinese)
// KMS����
#include <iostream>
#include <fstream>
#include <string>
#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <bits/stdc++.h>
#include <unistd.h>   

int main(){
    std::string kms_key, kms_server = "kms.ghpym.com" ,final_key = "slmgr.vbs /ipk " , final_server = "slmgr /skms " ;
    std::cout << "KMS ������ �� ��Կ ���������� -> https://www.ghxi.com/kms.html �� https://www.luochenzhimu.com/archives/882.html ���\n" << std::endl; // English for "Kms server and key can be found here -> https://www.ghxi.com/kms.html �� https://www.luochenzhimu.com/archives/882.html"
    std::cout << "KMS ������: " ; // English for "Kms server(Leave blank for kms.ghpym.com):"
    std::cin >> kms_server;
    std::cout << std::endl;
    std::cout << "��Կ: "; // English for "Key:"
    std::cin >> kms_key;
    final_key += kms_key;
    final_server += kms_server;
    char* finalkey = const_cast<char*>(final_key.c_str());
    char* finalserver = const_cast<char*>(final_server.c_str());
    system("slmgr.vbs /upk");
    std::cout << "ж��ԭ��Կ...\n"; // English for "Uninstalling key"
    system(finalkey);
    std::cout << "��װ��Կ...\n"; // English for "Installing key"
    system(finalserver);
    std::cout << "���ӷ�����...\n"; // English for "Connecting server"
    system("slmgr /ato");
    std::cout << "���!  ����С������ Github �� @girl-zhiling\n"; // English for "Done! More tools at Github @girl-zhiling"
    system("pause");
    return 0;
}