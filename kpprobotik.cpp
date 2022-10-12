//Nama: Aulia Daffa Rahmani
//NRP: 5025221205
//Jurusan: Teknik Informatika

#include<iostream>
#include<cmath>



int main() {
    int v0,x;
    float vtan;
    std::cin >> v0;

    int losses;
	if (v0<=10&&v0>=1)
    {
       losses=1;
    }

    else if(v0<=20&&v0>=11)
    {
        losses=3;
    }

    else if(v0<=30&&v0>=21)
    {

        losses=5;
    }

    v0=v0-losses;
    x=pow(v0,2)*sin(90*3.1415/180)/10;
    vtan=sqrt(x*10/sin(90*3.1415/180))+losses;
    std::cout << x << " " << vtan <<std::endl;

    return 0;
}

