#include <iostream>
#include <fstream> // neobhodima biblioteka

// >> vhod
// << izhod

// int readInt()
// {

// }

int main()
{
    // int a = readInt();

    std::ifstream in("sample.txt");  //analogichno na dolnoto //suzdava obekt za vuvezdane (analogichno na cin)  
    // in.open();                    //"C:\Users\Dimitar\Desktop\primeren vhod.txt"
                                     // moze i s drugo razshirenie (.exe, .doc). moze i bez (binary file)

    // int temp;
    // char temp_2;
    // in >> temp; // chete ot sample.txt  // nqma da vzeme 150. trqbva in.getline(temp) //sample_disable.txt
    // in.get(temp_2); // ??

    std::ofstream out("sample_out.txt"); //suzdava obekt za izvezdane (analogichno na cout)
                                         // moze i s drugo razshirenie (.exe, .doc). moze i bez (binary file)
    // out << temp; // zachistva sample_out.txt i zapisva informaciq ot sample.txt


    // std::ofstream out("sample_out.txt", std::ios::app); // NE zachistva sample_out.txt . zapisva informaciq ot sample.txt
    // out << "---" << temp;

    // int temp;
    // while (in >> temp) {  //dokato ne nameri stojnosti
        
    //     out << "---" << temp;
    // }

    int temp;
    int size;

    in >> size;

    int* arr = new int[size];

    for (int i = 0; i < size && in >> temp; i++) {
        arr[i] = temp;
        out << "---" << arr[i];
    }

    delete [] arr;
    in.close();
    out.close();

    std::fstream mix; // zelatelno da se izbqgva . kombinira ifstream i ofstream

    return 0;
}