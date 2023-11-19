#pragma execution_character_set( "utf-8" ) // for MSVC

#include <boost/nowide/args.hpp> // for utf8_to_utf16
#include <boost/nowide/fstream.hpp>		// for fstream
#include <boost/nowide/iostream.hpp> // for cout, cerr, cin, clog

using namespace boost::nowide; // for cout, cerr, cin, clog
using std::endl; // for endl

int main()
{
	//system("chcp 65001");
    std::locale::global(std::locale("En-us.UTF-8")); // for MSVC
	cout << "Testing unicode -- English -- Ελληνικά -- Español -- Русский. aäbcdefghijklmnoöpqrsßtuüvwxyz\n";
	std::string fio; // = "Иванов Иван Иванович";
	cout << "Введите строку: "; 
	cin >> fio; 
	cout << "Вы ввели: " << fio << "\n";
	cout << "Размер строки: " << fio.length() << endl;
	for (int i = 0; i < fio.length(); ++i) {
		cout << "[" << i << "]" << fio[i] << " (code: " << int(fio[i]) << ")" << endl;
	}
	return 0;
}