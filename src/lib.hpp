#include<fstream>



void scaffold(){
    std::ofstream fout("../docs/index.html");
    fout << "<html><head><title>index</title><link rel=\"stylesheet\" href=\"tailwind.css\"></head><body class=\"font-bold text-4xl text-center text-blue-500 bg-black\">HI</body></html>";
}